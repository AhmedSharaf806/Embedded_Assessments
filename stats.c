/******************************************************************************
 * Copyright (C) 2019 by Ahmed Sharaf - University of Tanta
 *****************************************************************************/
/**
 * @file static.c 
 * @brif source file of main function and define functions
 *
 * @author Ahmed Sharaf
 * @date 1st, Oct. 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE 40

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  print_array(test,SIZE);               //print the array without sorting
 
  sort_array(test,SIZE);		//sort the array from largest to smallest element
 
  print_statistics(test,SIZE);          //print the statstics of the array

  print_array(test,SIZE);               //print the array after sorting


    


}

/* definition of all functions */

/* definition of print array function*/
void print_array(unsigned char *test,unsigned int size)
{
	unsigned int i = 0;    //iteratior for the array
	for(i=0; i<size; i++)
		{
			printf("%d ",*(test+i)); // print every element of the array
		}
	printf("\n"); // print end line after printing the array
}

/* definition of print statstics*/
void print_statistics(unsigned char *test,unsigned int size)
{
	printf("The maximum value %d\n",find_maximum(test,size));  //print the maximum value in line
	
	printf("The minimum value %d\n",find_minimum(test,size));  //printf the minimum value in line
	
	printf("The mean  value %d\n",find_mean(test,size));       //print the mean value in line
	
	printf("The median value %d\n",find_median(test,size));    //print the median value in line
}

/*definition of sort array*/
void sort_array(unsigned char *test,unsigned int size)
{
	unsigned int i,j;	//iterators for the array loops
	unsigned int max_idx;   //index of the larger value to be compare
	
	for(i=0; i<size-1; i++)
	{
		max_idx = i;

		for(j=i+1; j<size; j++)
		{
			if(*(test+j)>*(test+i))
			{

				unsigned int temp = *(test+i);
				*(test+i) = *(test+j);
				*(test+j) = temp;
			}
		}
	}
}

/*definition maximum element of the array*/

unsigned int find_maximum(unsigned char *test, unsigned int size)
{
	unsigned int max_value = *test;		//initial value for the maximum value to first element of the array
	unsigned int i=0;			//iterator of the array loop

	for(int i=0; i<size; i++)
	{
		if( max_value < (*(test+i)))
			max_value = *(test+i);
	}

	return max_value;
}

/*definition minimum element of the array*/

unsigned int find_minimum(unsigned char *test, unsigned int size)
{
        unsigned int mini_value = *test;         //initial value for the minimum value to first element of the array
        unsigned int i=0;                       //iterator of the array loop

        for(int i=0; i<size; i++)
        {
                if( mini_value > (*(test+i)))
                        mini_value = *(test+i);
        }

        return mini_value;
}

/*definition mean of the array*/

unsigned int find_mean(unsigned char *test, unsigned int size)
{
        unsigned int sum = 0;		         //initial value of sum of the array
        unsigned int i=0;                        //iterator of the array loop

        for(int i=0; i<size; i++)
        {
                sum += *(test+i);
        }

        return sum/40;
}

/*definition median of the array*/
unsigned int find_median(unsigned char *test, unsigned int size)
{
	sort_array(test,SIZE);
	unsigned int median = (*(test+(size/2)) + *(test+(size/2)+1))/2;
	return median;
}




