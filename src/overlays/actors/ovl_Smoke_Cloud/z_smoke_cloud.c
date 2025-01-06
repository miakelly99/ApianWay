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

	u8 i;
	for (i = 0; i < SMOKE_CLOUD_PARTICLES; i++)
	{
		SmokeCloud_DrawDust(thisx, play);
	}
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
}

void SmokeCloud_Draw(Actor* thisx, PlayState* play) {
    SmokeCloud* this = (SmokeCloud*)thisx;
}

void SmokeCloud_DrawDust(Actor* thisx, PlayState* play)
{
		u32 cloudColor = (Rand_Next() % 12) + 32;
    Color_RGBA8 primColor = {cloudColor, cloudColor, cloudColor, 64};
    Color_RGBA8 envColor = {32, 32, 32, 64};
    
    Vec3f rightHandPos = GET_PLAYER(play)->bodyPartsPos[PLAYER_BODYPART_R_HAND];
		Vec3f position = rightHandPos;
		
		position.y = position.y + SMOKE_CLOUD_RIGHT_HAND_OFFSET;

		s16 angle = GET_PLAYER(play)->actor.world.rot.y;

		Vec2f playerFacing;
		playerFacing.x = Math_SinS(angle);
		playerFacing.y = Math_CosS(angle);
		float xz_speed = 5.0f;
		float xz_acceleration = -0.05f; 

		f32 playerXZSpeed = GET_PLAYER(play)->speedXZ;
    Vec3f velocity = {playerFacing.x * (xz_speed + playerXZSpeed), 0.2f, playerFacing.y * (xz_speed + playerXZSpeed)};
    Vec3f acceleration = {playerFacing.x * xz_acceleration, 0.0f, playerFacing.y * xz_acceleration};

    s16 scale = 50;
    s16 scaleStep = 20;
    s16 life = SMOKE_CLOUD_PARTICLE_LIFESPAN;

    EffectSsDust_Spawn(play, 0, &position, &velocity, &acceleration, &primColor, &envColor, scale, scaleStep, life, 0);
}