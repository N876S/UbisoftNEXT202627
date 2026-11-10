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
	
	void Update(const float deltaTime);
	void Render();
	void Shutdown();
};