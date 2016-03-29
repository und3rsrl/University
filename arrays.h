//
//  arrays.h
//  Project V0.1
//
//  Created by Alexandru Chiurtu on 03/03/16.
//  Copyright © 2016 Alexandru Chiurtu. All rights reserved.
//

#ifndef arrays_h
#define arrays_h

#include <stdio.h>
#include "stdbool.h"

void read_array (int *a, int n);
void display_array(int *a, int n);
void swap_array_elements(int *a, int m, int n);
bool array_is_sorted (int *a, int n);

#endif /* arrays_h */
