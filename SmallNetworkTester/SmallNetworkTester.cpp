// SmallNetworkTester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConfigReader.h"

int main()
{
	ConfigReader a = ConfigReader();
	std::string title = "title " + a.Read("ProgramTitle");
	system(title.c_str());
	
    return 0;
}

