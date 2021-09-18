#pragma once
#include <iostream>

void AlertError(const char* errormessage,
				bool exitafter,
				bool isfatal)
{
	if (isfatal == true) { printf("[FATAL ERROR]: %s\n", errormessage); exit(-1); }
	else { printf("[ERROR]: %s\n", errormessage); }
	if (exitafter == true) { exit(-1); }
	else {
		system("pause");
	}
}

void AlertWarn(const char* warnmessage, 
			   int warnlevel)
{
	if (warnlevel == 1) { printf("[WARN @ Level 1]: %s\n", warnmessage); }
	else if (warnlevel == 2) { printf("[WARN @ Level 2]"); }
	else { AlertError(warnmessage, false, false); }
}

void Alert(const char* message)
{
	printf("[INFO]: %s\n", message);
}
