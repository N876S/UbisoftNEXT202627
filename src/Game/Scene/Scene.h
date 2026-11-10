/*
* SCENE CLASS MANAGES ENTITIES, UI, SOUNDS, ETC
*/

#pragma once

#include "Scene/Entity.h"
#include <vector>

class Scene {
private:
	std::vector<Entity> entities;

public:
	void addEntity(Entity& e);

	void updateEntities();
	void drawEntities();

	void shutDownScene();
};