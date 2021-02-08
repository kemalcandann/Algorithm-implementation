#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "my_utility.h"
#include <stdlib.h>

#define		SIZE	10

int main()
{
	int a[SIZE] = { 3,5,8,7,2,9,1,4,10,6 };
	display_array(a, SIZE);

	int sval;
	printf("enter the value to search in array");
	scanf("%d", &sval);

	int index_first = 0;
	int index_last = SIZE - 1;
	int index_med;

	int cnt = 0;

	while (index_first <= index_last)
	{
		++cnt;										
		index_med = (index_first + index_last) / 2;	
		if (a[index_med] == sval)
			break;									
		else if (a[index_med] < sval)
			index_first = index_med + 1;		
		else
			index_last = index_med - 1;
	}

	if (index_first <= index_last)
		printf(("searched value in %d index found %d\n", index_med, a[index_med]);
	else
		printf("searched value not found\n");

	printf("total comparison made = %d\n", cnt);

	return 0;
}