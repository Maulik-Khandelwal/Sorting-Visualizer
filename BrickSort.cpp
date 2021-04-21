
#include "BrickSort.h"

std::vector<Animation> BrickSort::SortNumbers(std::vector<int>& numbers)
{
	std::vector<Animation> animations;
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for (size_t i = 1; i <= numbers.size() - 2; i = i + 2)
		{
			animations.push_back(Animation(AnimationType::COMPARE, i, i + 1));
			if (numbers[i] > numbers[i + 1])
			{
				animations.push_back(Animation(AnimationType::SWAP, i, i + 1));
				std::swap(numbers[i], numbers[i + 1]);
				sorted = false;
			}
		} 
		for (size_t i = 0; i <= numbers.size() - 2; i = i + 2)
		{
			animations.push_back(Animation(AnimationType::COMPARE, i, i + 1));
			if (numbers[i] > numbers[i + 1])
			{
				animations.push_back(Animation(AnimationType::SWAP, i, i + 1));
				std::swap(numbers[i], numbers[i + 1]);
				sorted = false;
			}
		}
	}
	return animations;
}
