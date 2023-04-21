#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

extern float building_width;
extern float building_height;
extern float building_depth;
extern float aperture;

void drawBase();

void drawArm();

void drawPan();

void drawFrame();
