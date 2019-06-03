//
//  main.c
//  Subarray
//
//  Created by Thomas Briggs on 26/05/2017.
//  Copyright © 2017 Thomas Briggs. All rights reserved.
//

#include <stdio.h>

int find_best(int *array, int size){
    int start = 0;
    int end = 0;
    int current = 0;
    int max = array[0];
    int i, j;
    while (end < size){
        for (i = start; i < size; i++){
            for (j = i; j >= end; j--){
                current += array[j];
            }
            if (current > max){
                max = current;
            }
            current = 0;
            start++;
        }
        end++;
        start = end;
    }
    return max;
}

int main(int argc, const char * argv[]) {
    
    int array[] = {10, -7, -5, 2, -2, -1, 8, 3, 2, -3};
    printf("Max value: %d \n", find_best(array, (sizeof(array)/sizeof(array[0]))));
    
    return 0;
    
}
