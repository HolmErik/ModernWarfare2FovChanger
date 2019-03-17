#pragma once
#include <Windows.h>
#include <string>

class MemoryManager
{
private:
	HWND hWnd;
	unsigned long procID;
	HANDLE hProc;
	DWORD fovOffset = 0x1578B50; //offset iw4sp.exe +  0x1578B50;
	DWORD fovAddress = 0x0;

public:
	~MemoryManager();

	template <class T>
	void read(T &outVar) const
	{
		ReadProcessMemory(hProc, (LPCVOID)(fovAddress), &outVar, sizeof(outVar), NULL);
	}

	template<typename T>
	void write(const T& buffer) const
	{
		WriteProcessMemory(hProc, (LPVOID)(fovAddress), &buffer, sizeof(buffer), NULL);
	}

	bool open(std::string processName);
	unsigned long getProcID() const;
	bool gameRunning() const;
	HANDLE getHandle();
	void closeHandle() const;
	DWORD getExeBaseAddress();
};

