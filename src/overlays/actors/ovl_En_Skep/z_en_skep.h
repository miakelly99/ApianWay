#ifndef Z_EN_SKEP_H
#define Z_EN_SKEP_H

#include "ultra64.h"
#include "global.h"

typedef struct EnSkep {
	DynaPolyActor dyna;
	u16 vulnerable_timer;
} EnSkep;

#endif