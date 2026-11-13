#include "Core/Engine.h"
#include "Scene/Entity.h"

Engine::Engine() {
	sceneCount = 3;
	sm = SceneManager();

	Entity e = Entity("./data/TestData/Test.bmp", 4, 8);
	e.setPosition(400, 400);
	e.setRotation(0.0f);
	e.setScale(1.0f);
	sm.getActiveScene()->addEntity(e);
}

void Engine::update(const float deltaTime) {
	sm.updateActiveScene(deltaTime);
}

void Engine::render() {
	sm.drawActiveScene();
}

void Engine::shutdown() {
	sm.shutDownScenes();
}