#ifndef TASK_H
#define TASK_H

#include <memory>

class Scene;
//namespace messages_ignacio
//{
	class Task
	{

	protected:
		Scene* scene;

	public:
		Task(Scene* _scene) : scene(_scene) {};
		virtual ~Task() = default;

		virtual void update(float delta) = 0;

	};
//}

#endif
