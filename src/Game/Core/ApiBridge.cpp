/*
* APIBRIDGE, PROGRAM RUNS FROM HERE
*/

#pragma once

#include "Core/Engine.h"
#include "app.h"

static Engine* engine;

void Init() {
	engine = new Engine();
}

void Update(const float deltaTime) {
	engine->update(deltaTime);
}

void Render() {
	engine->render();
}

void Shutdown() {
	engine->shutdown();
}