#ifndef Z_SMOKE_CLOUD_H
#define Z_SMOKE_CLOUD_H

#include "ultra64.h"
#include "global.h"

#define DEFAULT_SMOKECLOUD_LIFESPAN 120
#define SMOKE_CLOUD_PARTICLE_LIFESPAN 40

typedef struct SmokeCloud {
    Actor actor;
    u16 despawnTimer;
} SmokeCloud;

#endif