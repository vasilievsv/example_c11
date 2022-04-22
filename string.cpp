//
// Copyright (C) 2018 Sergei Vasiliev
//
// SPDX-License-Identifier: MIT
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str_normal  = "line.one\nline.two\nline.end\n";
	string str_raw     = R"("line.one\nline.two\nline.end\n")";

	cout<<str_normal<<endl;
	cout<<str_raw<<endl;

	return(0);
}