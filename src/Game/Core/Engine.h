/*
* ENGINE, MANAGES PROGRAM AT HIGHEST LEVEL
*/

#pragma once

#include "Scene/SceneManager.h"

class Engine {
private:
	int sceneCount;
	SceneManager sm;

public:

	Engine();
	
	void update(const float deltaTime);
	void render();
	void shutdown();
};