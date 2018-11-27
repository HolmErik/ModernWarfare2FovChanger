#pragma once
#include <Windows.h>
#include <string>
#include <iostream>

class MemoryManager
{
private:
	HWND hWnd;
	DWORD procID;
	HANDLE hProc;

public:
	MemoryManager(const std::string processName);
	~MemoryManager();



	//function for reading target process memory
	template <class T>
	void read(const DWORD &addressToRead, T &outVar) const
	{
		ReadProcessMemory(hProc, (LPCVOID)(addressToRead), &outVar, sizeof(outVar), NULL);
	}


	//function for writing to target process memory
	template <class T>
	void write(DWORD addressToWrite, T inVar) const
	{

	}



};

