#include "Day1.h"
#include "Helpers.h"
#include <algorithm>

size_t SonarSweep1(const std::string &inputpath)
{
	int oldnum = -1;
	size_t sum = 0;

	std::vector<std::string> input = ProcessInput(inputpath);
	for (auto& elem : input)
	{
		int newnum = std::stoi(elem);
		if (oldnum != -1 && newnum > oldnum)
		{
			sum++;
		}
		oldnum = newnum;
	}

	return sum;
}

size_t SonarSweep2(const std::string &inputpath)
{
	std::vector<int> window = { -1, -1, -1, -1 };
	size_t index = window.size() - 1;
	size_t sum = 0;

	std::vector<std::string> input = ProcessInput(inputpath);
	for (auto& elem : input)
	{
		std::rotate(window.begin(), window.begin() + 1, window.end());
		window[index] = std::stoi(elem);

		if (WindowFilled(window))
		{
			// except for first and last element, they are the same for both windows
			if (window[index] > window[0])
			{
				sum++;
			}
		}
	}

	return sum;
}

bool WindowFilled(const std::vector<int>& window)
{
	for (auto& elem : window)
	{
		if (elem == -1)
		{
			return false;
		}
	}
	return true;
}