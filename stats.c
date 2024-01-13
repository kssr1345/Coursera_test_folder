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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
void print_statistics(int arr[])
{
   printf("the maximum of the array is %d",max);
   printf("the minimum of the array is %d",min);
   printf("the mean of the array is %d",mean);
   printf("the median of the array is %d",median);

}
void print_array(int arr[])
{
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
		printf("The value is %d\n",arr[i]);
	}
}
void find_median(int arr[])
{  int n=sizeof(arr)/sizeof(arr[0]);
   if(n%2==0)
   {
     median=(arr[n/2]+arr[(n/2)+1])/2; 
   }    
   else
   {
     median=(arr[(n+1)/2]);
   }
  
}
void find_mean(int arr[])
{
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++)
   {
     mean=arr[i]+mean;
   }
   mean=mean/n;

}
void find_maximum(int arr[])
{
 return arr[0]; 
}
void find_minimum(int arr[])
{
  return arr[int(sizeof(arr)/sizeof(arr[0]))-1];
}
void sort_array(int arr[])
{
  int n=sizeof(arr)/sizeof(arr[0]);
  int temp=0,key=0,j=0;
  
   for(int i=1;i<n;i++)
   {
	key=arr[i];
	j=i-1;
        while(j>=0 && arr[j]>key)
        {
	  arr[j+1]=arr[j];
          j=j-1;
        }
        arr[j+1]=key;
   }
   
   

}
