#include <core/engine.h>

int main()
{
    graviton::EngineInitDescription description;
    description.windowWidth = 640;
    description.windowHeight = 480;
    description.windowTitle = "Test";

    graviton::Engine::GetInstance()->init(description);
    graviton::Engine::GetInstance()->run();

    return 0;
}
