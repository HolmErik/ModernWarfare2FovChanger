#pragma once
#include <Windows.h>
#include <string>

class MemoryManager
{
private:
	HWND hWnd;
	DWORD procID;
	HANDLE hProc;

public:
	~MemoryManager();

	template <class T>
	void read(const DWORD &addressToRead, T &outVar) const
	{
		ReadProcessMemory(hProc, (LPCVOID)(addressToRead), &outVar, sizeof(outVar), NULL);
	}



	template <class T>
	void write(DWORD &addressToWrite, T &inVar) const
	{
		WriteProcessMemory(hProc, (LPVOID)(addressToWrite), &inVar, siezof(inVar), NULL);
	}

	bool open(std::string processName);
	DWORD getProcID() const;
	bool gameRunning() const;
	HANDLE getHandle();
	void closeHandle() const;
};

