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

float find_mean(unsigned char *array, unsigned int length);
unsigned char find_median(unsigned char *array, unsigned int length);
unsigned char find_maximum(unsigned char *array, unsigned int length);
unsigned char find_minimum(unsigned char *array, unsigned int length);
void sort_array(unsigned char *array, unsigned int length);
void print_statistics(unsigned char *array, unsigned int length);
void print_array(unsigned char *array, unsigned int length);
void main() {

	  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
		                                114, 88,   45,  76, 123,  87,  25,  23,
					                              200, 122, 150, 90,   92,  87, 177, 244,
									                                    201,   6,  12,  60,   8,   2,   5,  67,
													                                    7,  87, 250, 230,  99,   3, 100,  90};
	      print_statistics(test, SIZE);
}
void print_statistics(unsigned char *array, unsigned int length){
	    print_array(array, length);
	        printf("Minimum of Array: %d\n", find_minimum(array, length));
		    printf("Maximum of Array: %d\n", find_maximum(array, length));
		        printf("Median of Array: %d\n", find_median(array, length));
			    printf("Mean of Array: %.3f\n", find_mean(array, length));
			        
}
void print_array(unsigned char *array, unsigned int length){
	    printf("Start of Array...\n");
	        for (int i = 0; i<length; i++){
			        printf("%d\n", array[i]);
				    }
		    printf("End of Array...\n");
}
unsigned char find_median(unsigned char *array, unsigned int length){
	    int array_pos=0;
	        int median = 0;
		    sort_array(array, length);
		        if (length%2==0){
				        array_pos=length/2;
					        median = (array[array_pos] + array[array_pos + 1])/2;
						    }
			    else{
				            array_pos=length/2;
					            median = array[array_pos];
						        }

			        return median;
}

float find_mean(unsigned char *array, unsigned int length){
	        float total_val = 0;
		        for (unsigned int i=0; i<length; i++){
				                total_val = total_val + array[i];
						        }
			        float mean_val = total_val / length;
				        return mean_val;
}
unsigned char find_maximum(unsigned char *array, unsigned int length){
	        unsigned char max_val = array [0]; 
		                for (int i = 0; i<length; i++){
					                        unsigned char comp = array[i];
								                        if (max_val<comp){
												                                max_val = comp;
																                        }
											                }
				        return max_val;

}
unsigned char find_minimum(unsigned char *array, unsigned int length){
	        unsigned char min_val = array [0];
		                for (int i = 0; i<length; i++){
					                        unsigned char comp = array[i];
								                        if (min_val>comp){
												                                min_val = comp;
																                        }
											                }
				        return min_val;
}
void sort_array(unsigned char *array, unsigned int length){
	    for (int i = 0; i<length; i++){
		            for (int j = i+1; j<length; j++){
				                int replace;
						            if (array[i]>array[j]){
								                    replace = array[i];
										                    array[i] = array[j];
												                    array[j] = replace;
														                    
														                }
							            }
			            
			        }
}





























































