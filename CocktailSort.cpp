
#include "CocktailSort.h"

std::vector<Animation> CocktailSort::SortNumbers(std::vector<int>& numbers)
{
	std::vector<Animation> animations;
	bool swapped = false;
	do
	{
		for (size_t i = 0; i <= numbers.size()-2; i++)
		{
			animations.push_back(Animation(AnimationType::COMPARE, i, i + 1));
			if (numbers[i] > numbers[i + 1])
			{
				animations.push_back(Animation(AnimationType::SWAP, i, i + 1));
				std::swap(numbers[i], numbers[i + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
		swapped = false;
		for (int i = numbers.size() - 2; i >= 0; i--)
		{
			animations.push_back(Animation(AnimationType::COMPARE, i, i + 1));
			if (numbers[i] > numbers[i + 1])
			{
				animations.push_back(Animation(AnimationType::SWAP, i, i + 1));
				std::swap(numbers[i], numbers[i + 1]);
				swapped = true;
			}
		}
	} while (swapped);
	return animations;
}
