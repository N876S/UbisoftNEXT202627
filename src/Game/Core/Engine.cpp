#include "Core/Engine.h"
#include "Scene/Entity.h"

Engine::Engine() {
	sceneCount = 3;
	sm = SceneManager(sceneCount);

	Entity e = Entity();
	sm.getActiveScene()->addEntity(e);
}

void Engine::Update(const float deltaTime) {
	sm.drawActiveScene();
}

void Engine::Render() {
	sm.updateActiveScene();
}

void Engine::Shutdown() {
	sm.shutDownScenes();
}