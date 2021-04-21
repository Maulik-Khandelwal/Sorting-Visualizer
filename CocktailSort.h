
#pragma once
#include "Sort.h"

class CocktailSort : public Sort
{
public:
	std::vector<Animation> SortNumbers(std::vector<int>& numbers) override;
};

