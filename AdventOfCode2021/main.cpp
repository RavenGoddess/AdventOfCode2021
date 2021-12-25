#include <iostream>
#include <filesystem>
#include "Day1.h"
#include "Day2.h"
#include "Day3.h"
#include "Day4.h"
#include "Day5.h"
#include "Day6.h"

std::string GetInputPath(int day);

int main()
{
	//std::cout << "Day 1 results: " << SonarSweep1(GetInputPath(1)) << ", " << SonarSweep2(GetInputPath(1)) << "\n";
	//std::cout << "Day 2 results: " << Dive(GetInputPath(2), false) << ", " << Dive(GetInputPath(2), true) << "\n";
	std::cout << "Day 3 results: " << BinaryDiagnostic1(GetInputPath(3)) << ", " << BinaryDiagnostic2(GetInputPath(3)) << "\n";
	//std::cout << "Day 4 results: " << GiantSquid(GetInputPath(4), false) << ", " << GiantSquid(GetInputPath(4), true) << "\n";
	//std::cout << "Day 5 results: " << HydrothermalVenture(GetInputPath(5), true) << ", " << HydrothermalVenture(GetInputPath(5), false) << "\n";
	//std::cout << "Day 6 results: " << Lanternfish(GetInputPath(6), 80) << ", " << Lanternfish(GetInputPath(6), 256) << "\n";

	std::cin.get();

	return 0;
}

std::string GetInputPath(int day)
{
	bool test = false;
	std::filesystem::path p = std::filesystem::current_path().parent_path();
	std::string path = p.string() + "\\input\\day" + std::to_string(day);

	if (test)
	{
		path += "test";
	}
	path += ".txt";

	return path;
}