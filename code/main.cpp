#include "Window.hpp"
#include "Scene.hpp"

int main (int argc, char* argv[])
{
    Window window (800,600);
    Scene scene(window);

    scene.run();

    return 0;
}