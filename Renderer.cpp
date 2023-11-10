#include "Arduino.h"
#include "FastLED.h"
#include "Engine.h"
#include "Renderer.h"

Renderer::Renderer(Engine *engine) {
  this->engine = engine;
  this->width = engine->width;
  this->height = engine->height;
}

Renderer::render(unsigned long time, float dt) {
  
}
