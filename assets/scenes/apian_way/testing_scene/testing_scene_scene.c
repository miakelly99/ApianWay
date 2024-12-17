#include "testing_scene_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd testing_scene_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&testing_scene_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, testing_scene_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x13, NA_BGM_GORON_CITY),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, LIGHT_MODE_SETTINGS),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, testing_scene_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(testing_scene_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, testing_scene_scene_header00_playerEntryList),
    SCENE_CMD_EXIT_LIST(testing_scene_scene_header00_exitList),
    SCENE_CMD_END(),
};

RomFile testing_scene_scene_roomList[] = {
    { (uintptr_t)_testing_scene_room_0SegmentRomStart, (uintptr_t)_testing_scene_room_0SegmentRomEnd },
};

ActorEntry testing_scene_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 135, 0, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn testing_scene_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 testing_scene_scene_header00_exitList[1] = {
    0x0000,
};

EnvLightSettings testing_scene_scene_header00_lightSettings[1] = {
    // Indoor No. 1 Lighting
    {
        {   143,   110,   130 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   219,   204,   194 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    79,    79,   133 },   // Diffuse1 Color
        {   196,   182,   175 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

CollisionHeader testing_scene_scene_collisionHeader = {
    { -336, 0, -336 },
    { 336, 213, 336 },
    ARRAY_COUNT(testing_scene_scene_vertices), testing_scene_scene_vertices,
    ARRAY_COUNT(testing_scene_scene_polygons), testing_scene_scene_polygons,
    testing_scene_scene_polygonTypes,
    testing_scene_scene_bgCamInfo,
    0, NULL
};

Vec3s testing_scene_scene_camPosData[] = {
    {      0,      0,      0 },
    { 0x1763, 0xABE3, 0xFEEA },
    {   3960,     -1,     -1 },
};

BgCamInfo testing_scene_scene_bgCamInfo[] = {
    { CAM_SET_NORMAL0, 3, &testing_scene_scene_camPosData[0] },
};

SurfaceType testing_scene_scene_polygonTypes[2] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
    { SURFACETYPE0(0, 1, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s testing_scene_scene_vertices[12] = {
    {    188,    213,    188 },
    {   -188,    213,    188 },
    {   -188,    213,   -188 },
    {    188,    213,   -188 },
    {    -91,      0,     91 },
    {    -91,      0,    -91 },
    {   -336,      0,   -336 },
    {   -336,      0,    336 },
    {     91,      0,     91 },
    {    336,      0,    336 },
    {     91,      0,    -91 },
    {    336,      0,   -336 },
};

CollisionPoly testing_scene_scene_polygons[12] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(2.6025572807952813e-08) }, 213 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(2.6025572807952813e-08) }, 213 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(10), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
    { 1, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 0 },
};

