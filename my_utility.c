#include "my_utility.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int day_of_the_week(int d, int m, int y)
{
	const int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

	if (m < 3)
		y -= 1;

	return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}

void dline(void)
{
	printf("\n-------------------------------------------------------------------------------\n");
}

int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_count = 0;

	while (val) {
		++digit_count;
		val /= 10;
	}

	return digit_count;
}

int isprime(int val)
{
	if (val < 2)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;
}

void sleep(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		; //null statement
}

void cls(void)
{
	system("cls");
}


void randomize(void)
{
	srand((unsigned int)time(0));
}

void set_random_array(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		p[i] = rand() % 1000;
}

void display_array(const int* p, int size)
{
	for (int i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	dline();
}


void sgets(char* p)
{
	int c;
	while ((c = getchar()) != '\n')
		* p++ = (char)c;

	*p = '\0';
}

double sum_array(const int* ptr, int size)
{
	double sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += ptr[i];
	}
	return sum;
}

double get_mean_array(const int* ptr, int size)
{
	return (double)sum_array(ptr, size) / size;

}

void swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void generic_swap(void* vptr1, void* vptr2, size_t n)
{
	char* p1 = (char*)vptr1;	
	char* p2 = (char*)vptr2;

	while (n--)
	{
		char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}
