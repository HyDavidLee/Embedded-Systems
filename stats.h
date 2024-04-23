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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Finds the mean/average of array of numbers
 *
 * Passes in the referenced array and SIZE of the array. Takes all elements of the array, adds them together and divides the sum by the length of the array. Returns a float since the number might not be a whole number. 
 *
 * @param 1 byte array to find the average for
 * @param 4 byte integer for length of array
 *
 * @return float mean
 */
float find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the median of the array
 *
 * Passes in the referenced array and SIZE of the array. Takes the sorted array from function, sort_array() to find the median. Take the length of the array and divide by 2. If the array is divisible by 2, modulo == 0, then take the index of the length divided by 2 and then the index of the length divided by 2 minus 1 to get the middle two elements of the array. Take the average of the two numbers. Return the char value.
 *
 * @param 1 byte array to find the median
 * @param 4 byte integer for length of array
 *
 * @return 1 byte median
 */

unsigned char find_median(unsigned char *array, unsigned int length);
/*
 * @brief Finds the highest number in the array.
 * 
 * Passes in the referenced array and SIZE of the array. Set initial maximum value to the first index of the array. Compare first number with the rest of the array. If the number is compared is greater than the initial maximum value, replace the maximum value with the current indexed element. Repeat through the entire array and the maximum number will be found. Return the unsigned char.
 * @param 1 byte array to find maximum value
 * @param 4 byte integer for length of array
 *
 * @return maximum number
 *
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);
/*
 * @brief Finds lowest number in the array.
 * 
 * Passes in the referenced array and SIZE of the array. Set initial value to the first index of the array for comparison. A for loop that loops through the entire length of the array will compare each each index with the initial value. If the number is less than the initial value, the variable will be replaced with the new number, continue on the loop until all indexes of the array have been compared. Return the unsigned char minimum number.
 *
 * @param 1 byte array to find minimum value
 * @param 4 byte integer for length of array
 *
 * @return minimum number
 *
 */

unsigned char find_minimum(unsigned char *array, unsigned int length);
/*
 * @brief Sorts the array in ascending order
 *
 * Passes in the referenced array and SIZE of the array. Start a for loop beginning with the first index of the array. Within the first loop, a second for loop will be created to compare all other indexes of the array to the first loop. If the value of the outside for loop index is greater than the value compared in the second for loop, swap values between the two indexes. Returns nothing, void.
 *
 * @param 1 byte array to sort
 * @param 4 byte integer for length of array
 *
 * @return nothing, void
 */

void sort_array(unsigned char *array, unsigned int length);
/* 
 * @brief prints out the necessary statistics of the array.
 *
 * Passes in the referenced array and SIZE of the array. Calls the functions: find_minimum(), find_maximum(), find_median(), find_mean(), print_array()and prints out the returned values from each of the funtions.
 *
 * @param 1 byte array to pass into functions
 * @param 4 byte integer for length of array to pass into functions
 *
 * @return nothing, void
 */

void print_statistics(unsigned char *array, unsigned int length);
/*
 * @brief prints every index of the array on separate line.
 *
 * Passes in the referenced array and SIZE of the array. Loops through each index of the array and prints the integer value.
 *
 * @param 1 byte array to print
 * @param 4 byte integer for length of array
 *
 * @return nothing, void
 */

void print_array(unsigned char *array, unsigned int length);


#endif /* __STATS_H__ */
