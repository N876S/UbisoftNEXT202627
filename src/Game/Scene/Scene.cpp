#include "Scene/Scene.h"
#include "Input/Input.h"

void Scene::updateEntities(float dt) {
	processInputs();
	for (Entity& e : entities) {
		e.update(dt);
	}
}

void Scene::processInputs() {
	Entity* player = &entities[0];
	InputManager::controller(entities[0], App::KEY_W, App::KEY_S, App::KEY_A, App::KEY_D);
}

void Scene::drawEntities() {
	for (Entity& e : entities) {
		e.draw();
	}
}

void Scene::shutDownScene() {
	for (Entity& e : entities) {
		e.freeEntity();
	}
}

void Scene::addEntity(Entity& e) {
	entities.push_back(e);
}