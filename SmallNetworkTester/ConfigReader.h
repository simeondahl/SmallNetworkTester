#pragma once
class ConfigReader
{
public:
	ConfigReader();
	~ConfigReader();
	std::string ReadConf(std::string configField);
};

