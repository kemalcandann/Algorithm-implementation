#ifndef MY_UUTILITY_H
#define MY_UTILITY_H

#include <stddef.h>

#define  isleap(y)     ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))
#define asize(x)		(sizeof(x) / sizeof(x[0]))

void dline(void);
int isprime(int);
int ndigit(int);
void sleep(double);
int day_of_the_week(int, int, int);         //0 sunday
void cls(void);
void randomize(void);
void set_random_array(int* , int);
void display_array(const int*, int);		
void sgets(char* p);
double sum_array(const int*, int);
double get_mean_array(const int*, int);
void swap(int*, int*);
void generic_swap(void*, void*, size_t)

