#include <core/engine.h>

int main()
{
  EngineInitDescription description;
  description.m_windowSize[0] = 640;
  description.m_windowSize[1] = 480;

  Engine::GetInstance()->init(description);
  Engine::GetInstance()->run();

  return 0;
}
