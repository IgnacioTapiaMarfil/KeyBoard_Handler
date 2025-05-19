#include "Kernel.hpp"

#include "InputTask.hpp"

void Kernel::run()
{
    running = true;

    update();
}

void Kernel::stop()
{
    running = false;
}

void Kernel::add_task(Task& _task)
{
    tasks.push_back(&_task);
}

void Kernel::update()
{
    float delta = 1.f / 60.f;  

    while (running)
    {
        for (auto& task : tasks)
        {
            task->update(delta);
        }

        for (auto& task : tasks)
        {
            if (auto input_task = dynamic_cast<InputTask*>(task))
            {
                input_task->dispatcher.process_messages();
            }
        }
    }
}
