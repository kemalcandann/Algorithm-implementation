#include<stdio.h>
#include <stdlib.h>

#define		SIZE	100	

void randomize(void)
{
	srand((unsigned int)time(0));
};Asd

void set_random_array(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		p[i] = rand() % 1000;
}

void swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void display_array(const int* p, int size)
{
	for (int i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
}

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
