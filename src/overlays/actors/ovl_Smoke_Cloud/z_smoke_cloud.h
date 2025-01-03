#ifndef Z_SMOKE_CLOUD_H
#define Z_SMOKE_CLOUD_H

#include "ultra64.h"
#include "global.h"

#define SMOKE_CLOUD_DEFAULT_LIFETIME 100

typedef struct SmokeCloud {
	u16 lifetime;
} SmokeCloud;

#endif