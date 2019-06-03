//
//  main.c
//  Test
//
//  Created by Thomas Briggs on 25/05/2017.
//  Copyright © 2017 Thomas Briggs. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 10

int add(int a, int b){
    int result;
    result = a + b;
    return result;
}

int smallestInt(int *array, int size){
    int smallest = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] < smallest){
            smallest = array[i];
        }
    }
    return smallest;
}

int main(int argc, const char * argv[]) {
    
    double pi = 3.141592614159261415926;
    printf("Original: %.15f, Formatted %.5f \n", pi, pi);
    
    bool yes = false;
    if (yes){
        printf("It worked \n");
    }
    
    int opp = 10, adj = 15;
    float hyp = hypot(opp, adj);
    printf("Hyp = %f \n", hyp);
    
    int array[SIZE] = {999, 4, 8, 33, 86, 2, 72, 64, 23, 11};
    printf("Smallest = %d \n", smallestInt(array, SIZE));
    
    int a = 5, b = 10, result;
    result = add(a, b);
    printf("%d + %d = %d \n" , a, b, result);
    
    return 0;
}
