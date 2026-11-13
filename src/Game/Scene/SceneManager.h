/*
* SCENE MANAGER MANAGES SCENES AND DISPLAYS AND DRAWS THE CORRECT ONE
*/

#pragma once

#include "Scene/Scene.h"

class SceneManager {
private:
	std::vector<Scene> scenes;
	int currentScene;

public:
	SceneManager();

	Scene* getActiveScene();

	void updateActiveScene(float dt);
	void drawActiveScene();

	void shutDownScenes();
};