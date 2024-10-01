#include <core/engine.h>

int main()
{
  EngineInitDescription description;
  description.windowWidth = 640;
  description.windowHeight = 480;

  Engine::GetInstance()->init(description);
  Engine::GetInstance()->run();

  return 0;
}
