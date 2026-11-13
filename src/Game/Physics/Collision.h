#pragma once

#include "Scene/Entity.h"

class Collision {
	static void colliding(Entity& e1, Entity& e2);
	static void colliding(Rect r1, Rect r2);
};