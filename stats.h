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
 * @file <stats.h> 
 * @brief < >
 *
 * <this file contains the documentation and declaration for the stats.c file>
 *
 * @author <Arun Prasath SARAVANAN>
 * @date <29/12/2020 >
 **/
 
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <This will give the statistics of the given array>
 *
 * <This function will give the overall statistics of the array input given from the other functions>
 *
 * @param <print_statistics(char)> <the stats to be printed>
 * @param <print_array(char)> <the input array given to be printed>
 * @param <find_median(char)> <This will find the median >
 * @param <find_mean(char)> <this will find the mean value from the input array>
 * @param <find_maximum(char)> <This will find the maximum value in the array>
 * @param <find_minimum(char)> <This will find the minimum value in the array>
 * @param <sort_array(char)> <This will sort the values in the array in the desending order>
 
 * @return <All these values will be returned and will be printed in the statistics function>
 */
 //************************* To Print the Statistics of the array **************************//
 void print_statistics(unsigned int size,int min,int max,float mean,float median){
 printf("\nThe size of the array is: %d\n",size);
 printf("The Minimum value in the given Array is: %d\n",min);
 printf("The Maximum value in the given Array is: %d\n",max);
 printf("The Mean value in the given Array is: %f\n",mean);
 printf("The Median value in the given Array is: %f\n\n",median);
 }
 
 //***************************** To Print the given array **********************************//
 void print_array(unsigned char arr[],unsigned int size){
 printf("The given array is:\n ");
  for (unsigned int i = 0; i < size; i++){
    printf("%d ",arr[i]);
    }
    printf("\n\n");
 }
 
 //************************ To find the median in the given array **************************//
 float find_median(unsigned char val[],unsigned int size){
 unsigned int i,j,half,mid;
 float med;
 unsigned char k,min;
 
 for (i = 0 ; i < size ; i++){
    for (j = 0 ; j < size ; j++){
       if (val[i] < val[j]){
         k = val[i];
         val[i] = val[j];
         val[j] = k;
       }
    } 
 }
 
 if(size % 2 == 0){
   half = size / 2;
   mid = val[half] + val[half + 1];
   med = mid / 2; 
 }
 else{
   half = size / 2;
   med = val[half + 1]; 
 }
 return med;
 }
 
 //********************** To find the MEAN values of the given array ***********************//
 float find_mean(unsigned char val[],unsigned int size){
   
 int sum =0;
 float mean = 0;
   
   for (unsigned int i = 0 ; i < size ; i++){
      sum += val[i];
   }
   mean = sum / size;
   return mean;
 }
 
 //*********************** To find the maximum in the array ********************************//
 int find_maximum(unsigned char val[],unsigned int size ){
 unsigned int i,j;
 unsigned char k,max;
 for (i = 0 ; i < size ; i++){
    for (j = 0 ; j < size ; j++){
       if (val[i] > val[j]){
         k = val[i];
         val[i] = val[j];
         val[j] = k;
       }
    } 
 }
 max = val[0];
 return max;
 }
 
 //************************ To find the minimum in the array *******************************//
 int find_minimum(unsigned char val[],unsigned int size){
 unsigned int i,j;
 unsigned char k,min;
 for (i = 0 ; i < size ; i++){
    for (j = 0 ; j < size ; j++){
       if (val[i] < val[j]){
         k = val[i];
         val[i] = val[j];
         val[j] = k;
       }
    } 
 }
 min = val[0];
 return min;
 }
 
 //****** To sort the arrays in the desending order (i.e, from largest to smallest *********//
 void sort_array(unsigned char val[],unsigned int size){
 unsigned int i,j;
 unsigned char k;
 
 for (i = 0 ; i < size ; i++){
    for (j = 0 ; j < size ; j++){
       if (val[i] > val[j]){
         k = val[i];
         val[i] = val[j];
         val[j] = k;
       }
    } 
 }
 printf("\nThe sorted array in desending order is :\n ");
 for (i = 0 ; i < size ; i++){
    printf("%d ",val[i]);
 }
 printf("\n\n");
 }

#endif /* __STATS_H__ */
