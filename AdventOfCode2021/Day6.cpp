#include "Day6.h"
#include "Helpers.h"
#include <fstream>
#include <algorithm>

huge Lanternfish(const std::string& inputpath, const int days)
{
	std::vector<huge> lanternfish = InitializeLanternfish(inputpath);

	for (size_t i = 0; i < days; i++)
	{
		ProcessLanternfish(lanternfish);
	}

	return GetLanternfishCount(lanternfish);
}

void ProcessLanternfish(std::vector<huge>& lanternfish)
{
	size_t spawn = lanternfish[0];

	std::rotate(lanternfish.begin(), lanternfish.begin()+1, lanternfish.end());
	lanternfish[6] += spawn;	
}

huge GetLanternfishCount(const std::vector<huge>& lanternfish)
{
	huge val = 0;
	for (auto& elem : lanternfish)
	{
		val += elem;
	}

	return val;
}

std::vector<huge>InitializeLanternfish(const std::string& inputpath)
{
	std::ifstream input;
	std::string line;
	std::vector<int> lanternfish_input;

	input.open(inputpath);
	if (input.is_open())
	{
		getline(input, line); 
		lanternfish_input = GetNumbersByDelim(line, ',');
		input.close();
	}

	std::vector<huge> lanternfish_cnt{0,0,0,0,0,0,0,0,0};
	for (auto& elem : lanternfish_input)
	{
		lanternfish_cnt[elem]++;
	}

	return lanternfish_cnt;
}