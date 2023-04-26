#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "game_objects.h"
#include <vector>

extern float building_width;
extern float building_height;
extern float building_depth;
extern float aperture;
extern float game_depth;

void drawFrame();

void drawTunnelPart(int tunnel_depth);

void drawCorridor(Corridor myCorridor);

void drawWallStep(std::vector<WallStep> myWallSteps); 

void drawWall(std::vector<Wall> myWalls);

void drawPlayer(Player myPlayer);