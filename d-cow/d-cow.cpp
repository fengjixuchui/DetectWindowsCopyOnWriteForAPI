/*
A copy on write detector for Windows APIs across processes

Released as open source by NCC Group Plc - http://www.nccgroup.com/

Developed by Ollie Whitehouse, ollie dot whitehouse at nccgroup dot com

https://github.com/nccgroup/DetectWindowsCopyOnWriteForAPI

Released under AGPL see LICENSE for more information
*/

// Includes
#include "stdafx.h"

bool	bService = false;
bool	bConsole = false;

// Globals
HANDLE	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

/// 
int _tmain(int argc, _TCHAR* argv[])
{
	fwprintf(stdout, _TEXT("[i] Running..\n"));
	EnumerateProcesses();

	return 0;
}

