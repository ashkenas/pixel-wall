#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
  private:
    uint width;
    uint height;
    Engine *engine;
  public:
    Renderer(Engine *engine);
    CRGB** render(unsigned long time, float dt);
};

#endif
