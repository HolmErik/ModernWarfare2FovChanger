#pragma once
#include <Windows.h>
#include <string>
#include "MemoryAddresses.h"

class MemoryManager
{
private:
	HWND hWnd;
	unsigned long procID;
	HANDLE hProc;
	MemoryAddresses memadd;
	DWORD exeAddress = 0x00400000;

public:
	~MemoryManager();

	template <class T>
	void read(const unsigned long &addressToRead, T &outVar) const
	{
		ReadProcessMemory(hProc, (LPCVOID)(addressToRead), &outVar, sizeof(outVar), NULL);
	}



	template <class T>
	void write(unsigned long &addressToWrite, T &inVar) const
	{
		WriteProcessMemory(hProc, (LPVOID)(addressToWrite), &inVar, siezof(inVar), NULL);
	}

	bool open(std::string processName);
	unsigned long getProcID() const;
	bool gameRunning() const;
	HANDLE getHandle();
	void closeHandle() const;
	LPVOID getExeBaseAddress();
};

