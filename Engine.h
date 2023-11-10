#ifndef ENGINE_H
#define ENGINE_H

class Engine {
  private:
    struct PixelAddr (*pixMap)(uint, uint);
  public:
    uint width;
    uint height;
    Engine(uint width, uint height, struct PixelAddr (*pixMap)(uint, uint));
};

#endif
