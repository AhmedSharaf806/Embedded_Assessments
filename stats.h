/******************************************************************************
 * Copyright (C) 2019 by Ahmed Sharaf - University of Tanta
 *****************************************************************************/
/**
 * @file <static.h> 
 * @brief header file for all functions' prototype
 *
 * @author <Ahmed Sharaf>
 * @date <1st, Oct. 2019>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__ 

/**
 * @brief  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * this functioon will print the statistics of its elements without changing in any element.
 *
 * @param statistics of array
 * @retuen no return
 */

void print_statistics(unsigned char *,unsigned int);

/**
 * @brief a function that prints the array
 * This function takes 2 parameters an unsigned char  pointer input a 32-b
it, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array. 
 *  
 * This function will return the value of the median number.
 * @param print array
 * @retuen no return
 */

void print_array(unsigned char *,unsigned int);

/**
 * @brief  A function that return the median of the elements in the array
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * This function will return the value of the median number.
 * @param print array
 * @retuen unsinged integer 32-bit.
 */

unsigned int find_median(unsigned char *,unsigned int);

/**
 * @brief  A function that return the mean of the elements in the array
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * This function will return the value of the mean number.
 * @param print array
 * @retuen unsinged integer 32-bit.
 */

unsigned int find_mean(unsigned char *,unsigned int);

/**
 * @brief  A function that return the maximum of the elements in the array
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * This function will return the value of the maximum number.
 * @param print array
 * @retuen unsinged integer 32-bit.
 */

unsigned int find_maximum(unsigned char *,unsigned int);

/**
 * @brief  A function that return the minimum of the elements in the array
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * This function will return the value of the minimum number.
 * @param print array
 * @retuen unsinged integer 32-bit.
 */

unsigned int find_minimum(unsigned char *,unsigned int);

/**
 * @brief  A function that sorting the array passed by refrence.
 * This function takes 2 parameters an unsigned char  pointer input a 32-bit, and an unsigned integer 32-bit.
 *
 * first input is the first address of array of 40 elements.
 * second input is the size of the array.
 *
 * This function will sort the array in descending order.
 * @param print array
 * @retuen no return.
 */
void sort_array(unsigned char *,unsigned int);

#endif /* __STATS_H__ */
