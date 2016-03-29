//
//  functions.c
//  Project V0.1
//
//  Created by Alexandru Chiurtu on 03/03/16.
//  Copyright © 2016 Alexandru Chiurtu. All rights reserved.
//

#include <stdio.h>
#include "functions.h"

// Swap two numbers

void swap(int *x, int *y) {
    
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

// The sum of two numbers

float sumOfFloat(float x, float y) {
    
    return x + y;
}

int sumOfInt(int x, int y) {
    
    return x + y;
}

// Display a number on screen

void displayInteger(int x) {
    printf("%d\n", x);
}

void displayFloat(float x) {
    printf("%f\n", x);
}
