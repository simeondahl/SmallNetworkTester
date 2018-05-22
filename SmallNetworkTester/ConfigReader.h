#pragma once
class ConfigReader
{
public:
	ConfigReader();
	~ConfigReader();
	std::string Read(std::string configField);
};

