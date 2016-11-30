#include "shape.h"

const Vec2 screenSize = {screenWidth, screenHeight};
const Vec2 screenCenter= {screenWidth/2, screenHeight/2};
const Vec2 vec2Unit = {1,1}, vec2Zero = {0,0};;

void
shapeInit()
{
  /* no longer needed */
}

void 
abShapeGetBounds(const AbShape *s, const Vec2 *centerPos, Region *bounds)
{
  (*s->getBounds)(s, centerPos, bounds);
}

int
abShapeCheck(const AbShape *s, const Vec2 *centerPos, const Vec2 *pixelLoc)
{
<<<<<<< HEAD
  return (*s->check)(s, centerPos, pixelLoc);
=======
  (*s->check)(s, centerPos, pixelLoc);
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
}

