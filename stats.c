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
 * @brief <here is the first assignment of this course where the sorting ,maxima and minima and mean code are written >
 *
 * <Add Extended Description Here>
 *
 * @author <Arun Prasath SARAVANAN>
 * @date <29/12/2020 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  unsigned char samp[SIZE];                              
  for (int i = 0 ; i < SIZE ; i++){
     samp[i] = test[i];
  }

  /* Other Variable Declarations Go Here */
 float median = find_median(samp,SIZE);
 float mean = find_mean(samp,SIZE);
 int max = find_maximum(samp,SIZE);
 int min = find_minimum(samp,SIZE);
 //unsigned char sorting[SIZE] = 
 sort_array(samp,SIZE);
 
 
  /* Statistics and Printing Functions Go Here */
 print_array(test,SIZE); /* Calling function to print the array */
 print_statistics(SIZE,min,max,mean,median);

}

/* Add other Implementation File Code Here */
