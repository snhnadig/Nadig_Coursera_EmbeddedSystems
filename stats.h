/******************************************************************************
 * Copyright (C) 2018 Sneha Nadig
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Header file with function declarations for functions in stats.c>
 *
 * 
 *
 * @author <Sneha Nadig>
 * @date <04/14/2018 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Function to print contents of an array>
 *
 * This function will print the contents of the the array defined in main() in the stst.c file. This function takes an input of type unsigned char *. The pointer variable *arr points to the cintents in the starting address of the array "test" defined in the main function.
 *
 * @param <arr> <unsigned char pointer which points to the given array in main()>

 * @return <This function does not have a return type>
 */
void print_array(unsigned char *arr);

/**
 * @brief <Function to calcualte the mean of n-elements in an array>
 *
 *This function calculates the mean of n-elements in the array. The formula to calculate the mean is as follows:
 mean=(sum of n-elements in the array)/number of elements in the array.Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
 *
 * @param <arr> <unsigned char pointer which points to the given array in main()>

 * @return <Returns the value of mean. Return type unsigned char>
*/
unsigned char find_mean(unsigned char *arr);
/**
* @brief <Function to find the maximum value of an array>
*
* This function find the maximum value among n-elemtns in an array). Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
* @param <arr>  <unsigned char pointer which points to the given array in main()>
* @return <Returns the value of maximum element. Return type unsigned char>

*/
unsigned char find_maximum(unsigned char *arr);
/**
* @brief <Function to find the minimum value of an array>
*
* This function finds the minimum value among n-elemtns in an array). Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
* @param <arr>  <unsigned char pointer which points to the given array in main()>
* @return <Returns the value of minimum element. Return type unsigned char>

*/
unsigned char find_minimum(unsigned char *arr);
/**
* @brief <Function to find the median of an array>
*
* This function finds the median value among n-elemtns in an array. Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
* @param <arr>  <unsigned char pointer which points to the given array in main()>
* @return <Returns the value of median. Return type unsigned char>
*/
unsigned char find_median(unsigned char *arr);
/**
* @brief <Function to sort an array in descending order>
*
* This function sorts the array in descending order. Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
* @param <arr>  <unsigned char pointer which points to the given array in main()>
* @return <Return type void>
*/
void sort_array(unsigned char *arr_sort);
/**
* @brief <Function to statistics of an array>
*
* This function prints statistics of an array like mean, median, maximum and minimum. Number of elements in the array is prefined to be 40 with the keyword SIZE in stats.c
* @param <arr>  <unsigned char pointer which points to the given array in main()>
* @return <Return type is unsigned char pointer>
*/
void print_statistics(unsigned char *arr2);
#endif /* __STATS_H__ */