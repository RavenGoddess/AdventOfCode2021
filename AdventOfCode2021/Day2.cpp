#include "Day2.h"
#include "Helpers.h"

int Dive(const std::string &inputpath, bool part)
{
	int depth = 0;
	int pos = 0;
	int aim = 0;

	std::vector<std::string> input = ProcessInput(inputpath);
	for (auto& elem : input)
	{
		int temp = GetDigitAfterDelim(elem, ' ');
		if (elem.find("forward") != std::string::npos)
		{
			pos += temp;
			depth += aim * temp;
		}
		else if (elem.find("down") != std::string::npos)
		{
			aim += temp;
		}
		else if (elem.find("up") != std::string::npos)
		{
			aim -= temp;
		}
	}

	if (part)
	{ 
		return depth * pos;
	}
	else
	{
		return aim * pos; // in first part depth = aim
	}
}