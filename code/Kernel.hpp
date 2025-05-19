#ifndef KERNEL_H
#define KERNEL_H

#include "Task.hpp"

#include <list>
#include <iostream>

//namespace messages_ignacio
//{
	class Kernel
	{

	private:
		std::list<Task*> tasks;
		bool running;

	public:

		void run();
		void stop();
		void add_task(Task& _task);

	private:

		void update();

	};
//}

#endif
