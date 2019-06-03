//
//  main.c
//  Binrary Search
//
//  Created by Thomas Briggs on 25/05/2017.
//  Copyright © 2017 Thomas Briggs. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool binrarySearch(int target, int *inputArray, int size){
    int start, mid, end;
    bool found = false;
    
    start = 0;
    end = size-1;
    
    while (found == false && start <= end){
        
        mid = (start+end)/2;
        
        if (inputArray[mid] == target){
            found = true;
        }else if (inputArray[mid] < target){
            start = mid+1;
        }else if (inputArray[mid] > target){
            end = mid-1;
        }
    }
    
    if (found){
        return true;
    }else{
        return false;
    }
}

int main(int argc, const char * argv[]) {
    printf("This is a binrary Search\n");
    
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d \n", binrarySearch(99, a, 9));
    
    return 0;
}
