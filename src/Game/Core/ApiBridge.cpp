/*
* APIBRIDGE, PROGRAM RUNS FROM HERE
*/

#pragma once

#include "Core/Engine.h"

static Engine* engine;

void Init() {
	Engine e = Engine();
	engine = &e;
}

void Update(const float deltaTime) {
	engine->Update(deltaTime);
}

void Render() {
	engine->Render();
}

void Shutdown() {
	engine->Shutdown();
}