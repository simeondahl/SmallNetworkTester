// SmallNetworkTester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConfigReader.h"

int main()
{
	ConfigReader a = ConfigReader();
	std::string hej = a.ReadConf("ProgramTitle");
	
    return 0;
}

