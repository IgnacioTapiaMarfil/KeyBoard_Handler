
#include "Scene.hpp"

void Scene::run()
{
    running = true;

    kernel.run();
}

void Scene::stop()
{
    kernel.stop();
}

void Scene::update()
{
}
