// mgs2-60fps.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"

void init_60fps() {
	CPatch::SetUChar(0x006E352F, 0);
}
