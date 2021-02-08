#include<stdio.h>
#include "my_utility.h"

#define		SIZE	100	

void reverse_array(int* ptr, size_t size)
{
	int* ptr_end = ptr + size;
	while (ptr < ptr_end)
	    swap(ptr++, --ptr_end);
}

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);				
	display_array(a, SIZE);
	reverse_array(a, SIZE);
	display_array(a, SIZE);

	return 0;
}
