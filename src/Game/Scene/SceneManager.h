/*
* SCENE MANAGER MANAGES SCENES AND DISPLAYS AND DRAWS THE CORRECT ONE
*/

#pragma once

#include "Scene/Scene.h"

class SceneManager {
private:
	Scene* scenes;
	int sceneCount;
	int currentScene;

public:
	SceneManager() = default;
	SceneManager(int sceneCount);

	~SceneManager();

	Scene* getActiveScene();

	void updateActiveScene();
	void drawActiveScene();

	void shutDownScenes();
};