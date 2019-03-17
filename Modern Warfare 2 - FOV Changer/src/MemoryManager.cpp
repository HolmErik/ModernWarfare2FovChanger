#include "MemoryManager.h"
#include <iostream>
#include "psapi.h"
#include <string>

bool MemoryManager::open(std::string processName)
{
	hWnd = FindWindowA(NULL, processName.c_str());
	GetWindowThreadProcessId(hWnd, &procID);
	hProc = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_QUERY_INFORMATION | PROCESS_QUERY_LIMITED_INFORMATION, false, procID);

	if (hProc)
	{
		fovAddress = getExeBaseAddress() + fovOffset;
		return true;
	}
	else return false;
}


DWORD MemoryManager::getExeBaseAddress()
{
	HMODULE hMods[1024];
	DWORD cbNeeded;

	if (EnumProcessModules(hProc, hMods, sizeof(hMods), &cbNeeded))
	{
		for (int i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
		{
			TCHAR moduleName[MAX_PATH];

			if (GetModuleFileNameEx(hProc, hMods[i], moduleName, sizeof(moduleName) / sizeof(TCHAR)))
			{
				std::wstring wstrModuleName = moduleName;

				if (wstrModuleName.find(L"Modern Warfare 2") != std::string::npos)
				{
					MODULEINFO modInfo;
					GetModuleInformation(hProc, hMods[i], &modInfo, sizeof(MODULEINFO));
					return (DWORD)modInfo.lpBaseOfDll;
				}
			}
		}
	}
	return 0;
}

MemoryManager::~MemoryManager()
{
	if(hProc)
		CloseHandle(hProc);
}

unsigned long MemoryManager::getProcID() const
{
	return procID;
}

bool MemoryManager::gameRunning() const
{
	return GetExitCodeProcess(hProc, nullptr);
}

HANDLE MemoryManager::getHandle()
{
	return hProc;
}

void MemoryManager::closeHandle() const
{
	CloseHandle(hProc);
}