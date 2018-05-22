#include "stdafx.h"
#include "ConfigReader.h"
#include <fstream>
#include <vector>

ConfigReader::ConfigReader()
{
}


ConfigReader::~ConfigReader()
{
}


std::string ConfigReader::ReadConf(std::string configField)
{
	std::string line;
	std::ifstream f(_CONFIG_FILE_);
	std::vector<char> return_char_vector;

	while (getline(f, line)) 
	{
		// check if field is found in the given line
		if (line.find(configField) != std::string::npos) 
		{
			// save line length
			int line_length = line.length();

			// creating empty char vector
			std::vector<char> temp_char_vector;

			// putting the string line into the char vector
			std::copy(line.begin(), line.end(), std::back_inserter(temp_char_vector));

			// to keep track of when it should start storeing the chars to return
			bool track_chars_now = false;

			// loop the line char by char
			for (int i = 0; i < line_length; i++)
			{
				char current_char = temp_char_vector[i];

				// check if it should track
				if (track_chars_now)
				{
					return_char_vector.push_back(temp_char_vector[i]);
				}

				if (current_char == '=')
				{
					track_chars_now = true;
				}

				
			}


		}
	}

	return std::string(return_char_vector.begin(), return_char_vector.end());;
}
