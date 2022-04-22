//
// Copyright (C) 2018 Sergei Vasiliev
//
// SPDX-License-Identifier: MIT
//
#include <array>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	array<int,10> my_list = {0, 0, 0};

	///range based loop FOR
	for(auto  &elem : my_list)
	{
		cout<<elem<<endl;
	}

	//loop FOR and operator []
	for(int i=0; i<my_list.size(); i++)
	{
		cout<<my_list[i]<<endl;
	}

	//using iterators
	auto it = my_list.begin();
	while(it!=my_list.end())
	{
		cout<<*it<<",";
		it++;
	}

	for_each(my_list.begin(),my_list.end(), [](const int &elem){

		cout<<elem<<",";
	});

	return 0;
}