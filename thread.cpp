//
// Copyright (C) 2018 Sergei Vasiliev
//
// SPDX-License-Identifier: MIT
//
//  compile:
//      g++ thread.cpp -o foo -std=c++11 -pthread
//
#include <iostream>
#include <thread>

using namespace std;

class Task
{
public: 
		void execute(string cmd)
		{
			for(int i = 0; i < 5; i++)
			{
				cout<<cmd<<"::"<<i<<endl;
				this_thread::sleep_for(chrono::milliseconds(1000));
			}
		}
};

int main()
{
	Task *ptr_task = new Task();
	std::thread myThread(&Task::execute, ptr_task, "sample task");

	myThread.join();
	delete ptr_task;
	
	return 0;
}