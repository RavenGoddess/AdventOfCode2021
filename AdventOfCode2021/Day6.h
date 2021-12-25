#pragma once
#include <string>
#include <vector>

typedef unsigned long long int huge;
huge Lanternfish(const std::string& inputpath, const int days);

std::vector<huge>InitializeLanternfish(const std::string& inputpath);
void ProcessLanternfish(std::vector<huge>& lanternfish);
huge GetLanternfishCount(const std::vector<huge>& lanternfish);