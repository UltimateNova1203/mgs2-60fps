// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved ) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        init_60fps();
    }

    return TRUE;
}