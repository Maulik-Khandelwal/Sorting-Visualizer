
#include "CombSort.h"

std::vector<Animation> CombSort::SortNumbers(std::vector<int>& numbers)
{
	std::vector<Animation> animations;
	auto GetNextGap = [](size_t gap)
	{
		gap = (gap * 10) / 13;
		return (gap < 1) ? 1 : gap;
	};
	size_t gap = numbers.size();
	bool swapped = true;
	while (gap != 1 || swapped == true)
	{
		gap = GetNextGap(gap);
		swapped = false;
		for (size_t i = 0; i < numbers.size() - gap; i++)
		{
			animations.push_back(Animation(AnimationType::COMPARE, i, i + gap));
			if (numbers[i] > numbers[i + gap])
			{
				animations.push_back(Animation(AnimationType::SWAP, i, i + gap));
				std::swap(numbers[i], numbers[i + gap]);
				swapped = true;
			}
		}
	}
	return animations;
}
