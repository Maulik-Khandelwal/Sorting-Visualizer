
#include <stdint.h>
#include "GnomeSort.h"

std::vector<Animation> GnomeSort::SortNumbers(std::vector<int>& numbers)
{
	std::vector<Animation> animations;
	uint32_t currentIndex = 0;
	while (currentIndex < numbers.size())
	{
		if (currentIndex == 0) ++currentIndex;
		animations.push_back(Animation(AnimationType::COMPARE, currentIndex, currentIndex - 1));
		if (numbers[currentIndex] >= numbers[currentIndex - 1])	++currentIndex;
		else
		{
			animations.push_back(Animation(AnimationType::SWAP, currentIndex, currentIndex - 1));
			std::swap(numbers[currentIndex], numbers[currentIndex - 1]);
			--currentIndex;
		}
	}
	return animations;
}
