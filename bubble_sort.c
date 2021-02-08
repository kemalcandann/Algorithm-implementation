#include<stdio.h>
#include "my_utility.h"

#define		SIZE	100

void bubble_sort_max_to_min(int* p, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t j = 0; j < size - 1 - i; ++j)		
		{
			if (p[j + 1] > p[j])
				swap(p + j + 1, p + j);
		}
	}
}

void bubble_sort_min_to_max(int* ptr, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t k = 0; k < size - 1 - i; ++k)
		{
			if (ptr[k + 1] < ptr[k])
				swap(ptr + k + 1, ptr + k);
		}
	}
}

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	bubble_sort_max_to_min(a, SIZE);
	display_array(a, SIZE);

	bubble_sort_min_to_max(a, SIZE);
	display_array(a, SIZE);

	return 0;
}