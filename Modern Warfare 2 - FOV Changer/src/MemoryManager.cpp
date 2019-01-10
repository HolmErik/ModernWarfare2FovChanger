#include "MemoryManager.h"



bool MemoryManager::open(std::string processName)
{
	hWnd = FindWindowA(NULL, processName.c_str());
	GetWindowThreadProcessId(hWnd, &procID);
	hProc = OpenProcess(PROCESS_ALL_ACCESS | PROCESS_QUERY_INFORMATION | PROCESS_QUERY_LIMITED_INFORMATION, false, procID);
	if (hProc) return true;
	else return false;
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