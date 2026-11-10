#include "Scene/SceneManager.h"

SceneManager::SceneManager(int sceneCount) {
	this->sceneCount = sceneCount;
	this->currentScene = 0;
	scenes = new Scene[sceneCount];
}

SceneManager::~SceneManager() {
	for (int i = 0; i < sceneCount; i++) {
		scenes[i].shutDownScene();
	}
}

void SceneManager::updateActiveScene() {
	scenes[currentScene].updateEntities();
}

void SceneManager::drawActiveScene() {
	scenes[currentScene].drawEntities();
}

void SceneManager::shutDownScenes() {
	delete[] scenes;
}

Scene* SceneManager::getActiveScene() {
	return &scenes[currentScene];
}