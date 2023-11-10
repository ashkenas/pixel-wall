#include "Arduino.h"
#include "PixelAddr.h"
#include "Engine.h"

Engine::Engine(uint width, uint height, struct PixelAddr (*pixMap)(uint, uint)) {
  this->width = width;
  this->height = height;
  this->pixMap = pixMap;
}
