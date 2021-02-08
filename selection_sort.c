#include<stdio.h>
#include "my_utility.h"

#define		SIZE	100

int* get_array_min(const int* array, size_t size)
{
	const int* min_array = array;

	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] < *min_array)				
			min_array = array + i;
	}
	return (int*)min_array;
}


void selection_sort(int* p, int size)	
{
	for (int i = 0; i < size; ++i)				
	{
		swap(get_array_min(p + i,size - i), p + i);
	}
}

int main()
{

	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	selection_sort(a, SIZE);
	display_array(a, SIZE);
	return 0;
}
