#include "Scene/SceneManager.h"

SceneManager::SceneManager() {
	this->currentScene = 0;
	Scene s = Scene();
	scenes.push_back(s);
}

void SceneManager::updateActiveScene(float dt) {
	scenes[currentScene].updateEntities(dt);
}

void SceneManager::drawActiveScene() {
	scenes[currentScene].drawEntities();
}

void SceneManager::shutDownScenes() {
	for (Scene& s : scenes) {
		s.shutDownScene();
	}
}

Scene* SceneManager::getActiveScene() {
	return &scenes[currentScene];
}