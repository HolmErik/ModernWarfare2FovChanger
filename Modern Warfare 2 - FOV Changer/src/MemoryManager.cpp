#include "MemoryManager.h"



MemoryManager::MemoryManager(const std::string processName)
{
	hWnd = FindWindow(NULL,(LPCWSTR)processName.c_str());
	GetWindowThreadProcessId(hWnd, &procID);
	hProc = OpenProcess(PROCESS_ALL_ACCESS, false, procID);
}


MemoryManager::~MemoryManager()
{
	CloseHandle(hProc);
}
