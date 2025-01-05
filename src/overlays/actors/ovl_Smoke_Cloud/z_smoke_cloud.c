#include "z_smoke_cloud.h"
#include "z64math.h"
#include "assets/objects/object_en_skep/gEnSkepDL.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void SmokeCloud_Init(Actor* thisx, PlayState* play);
void SmokeCloud_Destroy(Actor* thisx, PlayState* play);
void SmokeCloud_Update(Actor* thisx, PlayState* play);
void SmokeCloud_Draw(Actor* thisx, PlayState* play);

void SmokeCloud_DrawDust(Actor* thisx, PlayState* play);

const ActorProfile Smoke_Cloud_Profile = {
	ACTOR_SMOKE_CLOUD,
	ACTORCAT_BG,
	FLAGS,
	OBJECT_EN_SKEP,
	sizeof(SmokeCloud),
	(ActorFunc) SmokeCloud_Init,
	(ActorFunc) SmokeCloud_Destroy,
	(ActorFunc) SmokeCloud_Update,
	(ActorFunc) SmokeCloud_Draw
};

void SmokeCloud_Init(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;
    this->despawnTimer = DEFAULT_SMOKECLOUD_LIFESPAN;
}

void SmokeCloud_Destroy(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;
}

void SmokeCloud_Update(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;

    if (this->despawnTimer == 0)
    {
        Actor_Kill(thisx);
        return;
    }
    this->despawnTimer--;
    if (this->despawnTimer >= SMOKE_CLOUD_PARTICLE_LIFESPAN)
    {
        SmokeCloud_DrawDust(thisx, play);
    }
}

void SmokeCloud_Draw(Actor* thisx, PlayState* play) {
    SmokeCloud* this = (SmokeCloud*)thisx;
}

void SmokeCloud_DrawDust(Actor* thisx, PlayState* play)
{
    Color_RGBA8 primColor = {64, 64, 64, 64};
    Color_RGBA8 envColor = {32, 32, 32, 64};
    
    Vec3f position = thisx->world.pos;
    Vec3f velocity = {0.0f, 0.0f, 0.0f};
    Vec3f acceleration = {0.0f, 0.0f, 0.0f};

    s16 scale = 100;
    s16 scaleStep = 10;
    s16 life = SMOKE_CLOUD_PARTICLE_LIFESPAN;

    EffectSsDust_Spawn(play, 0, &position, &velocity, &acceleration, &primColor, &envColor, scale, scaleStep, life, 0);
}