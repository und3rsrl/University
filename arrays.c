//
//  arrays.c
//  Project V0.1
//
//  Created by Alexandru Chiurtu on 03/03/16.
//  Copyright © 2016 Alexandru Chiurtu. All rights reserved.
//

#include "stdio.h"
#include "arrays.h"
#include "stdbool.h"

// Read elements of an array

void read_array (int *a, int n) {
    
    for(int i = 0; i < n; i++) {
        printf("A[%d]=",i);
        scanf("%d", &a[i]);
    }
}

// Display an array

void display_array (int *a, int n) {
    
    for(int i = 0; i < n; i++) {
        printf("A[%d]= %d\n",i,a[i]);
    }
}

// Swap two elements of an array

void swap_array_elements (int *a, int m, int n) {

    int temp;
    temp = a[m];
    a[m] = a[n];
    a[n] = temp;
}

// Display True if the array is sorted and else False

bool array_is_sorted (int *a, int n) {

    for(int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            return false;
        }
    }
    return true;
}

// Display maximum element of an array

int int_max(int *a, int n) {
    
    int max = a[0];
    
    for(int i = 1; i < n; i++)
        if(max < a[i])
            max = a[i];
    
    return max;
}

float float_max(float *a, int n) {
    
    float max = a[0];
    
    for(int i = 1; i < n; i++)
        if(max < a[i])
            max = a[i];
    
    return max;
}

// Display minimum element of an array

int int_min(int *a, int n) {
    
    int min = a[0];
    
    for(int i = 1; i < n; i++)
        if(min > a[i])
            min = a[i];
    
    return min;
}

float float_min(float *a, int n) {
    
    float min = a[0];
    
    for(int i = 1; i < n; i++)
        if(min > a[i])
            min = a[i];
    
    return min;
}

