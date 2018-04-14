/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Files contains functions to print contents of an arry, sort the array, find maximum, minimum, mean and median of the array and finally to print the statistics of the array >
 *
 * 
 *
 * @author <Sneha Nadig>
 * @date <4/13/2018 >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
#include <string.h>

/* Size of the Data Set */
#define SIZE (40)
/*Global declaration of variables so they can be used inside in functions as well as main() */
unsigned char mean;
unsigned char median;
unsigned char max;
unsigned char min;
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);
  mean=find_mean(test);
  max=find_maximum(test);
  min=find_minimum(test);
  median=find_median(test);
  sort_array(test);
  print_statistics(test);
}

/* This function prints the contents of an array which is passed with pointer p. */
void print_array( unsigned char *p)
{
	int i;
	printf("Printing contents of the array:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("element[%d]    %d\n",i,*p);
		*p++;
	}
}
/* This function finds the mean of the array which is passed with pointer arr */
unsigned char find_mean(unsigned char *arr)
{
	int add=0;
	int i;
	unsigned char mean_var=0;
	for(i=0;i<SIZE;i++)
	{
		add=add+(*(arr+i));
		
	}
	mean_var=add/SIZE;
	return mean_var;
}
/* This function finds the maximum value of the array */
unsigned char find_maximum(unsigned char *arr)
{
	int i;
	unsigned char max=*arr;
	for(i=0;i<SIZE;i++)
	{
		if(max<*(arr+i))
		{
			max=*(arr+i);
		}
	}
	return max;
}
/* This function finds the minimum value of the array */
unsigned char find_minimum(unsigned char *arr)
{
	int i;
	unsigned char min=*arr;
	for(i=0;i<SIZE;i++)
	{
		if(min>*(arr+i))
		{
			min=*(arr+i);
		}
	}
	return min;
}
/*This function finds the median of the array. Since the array is unsorted, contents of the array is copied to a temporary pointer, sorted in ascending order and then the median value is calculated */
unsigned char find_median(unsigned char *arr)
{
	unsigned char middle, median;
	unsigned char *ptr= (unsigned char*)malloc(SIZE*sizeof(ptr));
	int i=0,j;
	unsigned char temp;
	while(i<SIZE)
	{
		*(ptr+i)=*(arr+i);
		i++;
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=(i+1);j<SIZE;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	middle= (SIZE+1)/2;
	median=*(ptr+middle);
	return median;
}

/*This function sorts the contents of the array which is passed in pointer arr_sort in descending order */
void sort_array(unsigned char *arr_sort)
{
	int i,j;
	unsigned char t=0;
	for (i=0;i<(SIZE);i++)
	{
		for (j=(i+1);j<(SIZE);j++)
		{
			if(*(arr_sort+i)<*(arr_sort+j))
			{
				t=*(arr_sort+i);
				*(arr_sort+i)=*(arr_sort+j);
				*(arr_sort+j)=t;
			}
		}
	}
	printf("Printing sorted array from largest to smallest\n");
	for (i=0;i<SIZE;i++)
	{
		printf("element[%d]    %d\n",i,*arr_sort);
		arr_sort++;
	}
}
/* This function prints the statistics of an array which include mean, median, maximum, minimum */
void print_statistics(unsigned char *arr2)
{
	printf("Mean: %u\n", mean);
	printf("Median: %d\n", median);
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
}



