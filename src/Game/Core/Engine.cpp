#include "Core/Engine.h"
#include "Scene/Entity.h"

Engine::Engine() {
	sceneCount = 3;
	sm = SceneManager();

	Entity e = Entity();
	sm.getActiveScene()->addEntity(e);
}

void Engine::update(const float deltaTime) {
	sm.updateActiveScene();
}

void Engine::render() {
	sm.drawActiveScene();
}

void Engine::shutdown() {
	sm.shutDownScenes();
}