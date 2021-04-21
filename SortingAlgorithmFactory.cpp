
#include "SortingAlgorithmFactory.h"

std::unique_ptr<Sort> SortingAlgorithmFactory::GetSortingAlgorithm(SortingAlgorithmFactory::Algorithm algorithmType)
{
	switch (algorithmType)
	{
	case SortingAlgorithmFactory::Algorithm::BUBBLE_SORT:
		return std::make_unique<BubbleSort>();
	case SortingAlgorithmFactory::Algorithm::SELECTION_SORT:
		return std::make_unique<SelectionSort>();
	case SortingAlgorithmFactory::Algorithm::INSERTION_SORT:
		return std::make_unique<InsertionSort>();
	case SortingAlgorithmFactory::Algorithm::MERGE_SORT:
		return std::make_unique<MergeSort>();
	case SortingAlgorithmFactory::Algorithm::QUICK_SORT:
		return std::make_unique<QuickSort>();
	case SortingAlgorithmFactory::Algorithm::HEAP_SORT:
		return std::make_unique<HeapSort>();
	case SortingAlgorithmFactory::Algorithm::GNOME_SORT:
		return std::make_unique<GnomeSort>();
	case SortingAlgorithmFactory::Algorithm::COCKTAIL_SORT:
		return std::make_unique<CocktailSort>();
	case SortingAlgorithmFactory::Algorithm::BRICK_SORT:
		return std::make_unique<BrickSort>();
	case SortingAlgorithmFactory::Algorithm::COMB_SORT:
		return std::make_unique<CombSort>();
	default:
		return std::make_unique<MergeSort>();
	}
}
