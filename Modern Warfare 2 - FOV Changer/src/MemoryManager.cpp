#include "MemoryManager.h"
#include <iostream>
#include "psapi.h"

bool MemoryManager::open(std::string processName)
{
	hWnd = FindWindowA(NULL, processName.c_str());
	GetWindowThreadProcessId(hWnd, &procID);
	hProc = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_QUERY_INFORMATION | PROCESS_QUERY_LIMITED_INFORMATION, false, procID);
	getExeBaseAddress();
	if (hProc) return true;
	else return false;
}


DWORD MemoryManager::getExeBaseAddress()
{
	TCHAR nameProc[MAX_PATH];
	GetProcessImageFileName(hProc, nameProc, MAX_PATH);
	std::cout << nameProc << std::endl;
	//https://stackoverflow.com/questions/14467229/get-base-address-of-process?rq=1
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