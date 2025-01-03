#include "z_smoke_cloud.h"
#include "assets/objects/object_smoke_cloud/gSmokeCloudDL.h"
#include "assets/objects/object_en_skep/gEnSkepDL.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS 0

void SmokeCloud_Init(Actor* thisx, PlayState* play);
void SmokeCloud_Destroy(Actor* thisx, PlayState* play);
void SmokeCloud_Update(Actor* thisx, PlayState* play);
void SmokeCloud_Draw(Actor* thisx, PlayState* play);

const ActorProfile Smoke_Cloud_Profile = {
	ACTOR_SMOKE_CLOUD,
	ACTORCAT_MISC,
	FLAGS,
	OBJECT_SMOKE_CLOUD,
	sizeof(SmokeCloud),
	(ActorFunc) SmokeCloud_Init,
	(ActorFunc) SmokeCloud_Destroy,
	(ActorFunc) SmokeCloud_Update,
	(ActorFunc) SmokeCloud_Draw
};

void SmokeCloud_Init(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;

    this->lifetime = 0;
}

void SmokeCloud_Destroy(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;
}

void SmokeCloud_Update(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;
    if (this->lifetime == 0)
    {
        //Actor_Kill(thisx);
        //return;
    }
    else
    {
        this->lifetime--;
    }
}

void SmokeCloud_Draw(Actor* thisx, PlayState* play) {
	SmokeCloud* this = (SmokeCloud*)thisx;
    Gfx_DrawDListOpa(play, gSmokeCloudDL);
}