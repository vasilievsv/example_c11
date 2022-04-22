//
// Copyright (C) 2018 Sergei Vasiliev
//
// SPDX-License-Identifier: MIT
//
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int	 _array[] = { 1, 2, 3, 4, 5 };
    auto _foo = 10;
	auto _len = _array + sizeof(_array) / sizeof(int);    

    for_each(_array, _len, [](int x){
    	// 
        std::cout<<x<<endl;
    });

	//Передача всех локальных переменых по сслыке
    for_each(_array, _len, [&](int x){
        // read/write scope
        _foo = 3;
    });

	//Передача всех локальных переменых по значению
    for_each(_array, _len, [=](int x){
    	// read only scope
    	cout<<_foo<<"::"<<endl; 
    });

	return 0;
}

//this_thread::sleep_for(chrono::milliseconds(1000));