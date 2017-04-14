//
//  Array.h
//  TestC
//
//  Created by Genek on 4/14/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include <stdio.h>

typedef struct IDPArray IDPArray;

IDPArray *create();

void dealloc();

size_t getLength(IDPArray *array);
void setLength(size_t newLength, IDPArray *array);

#endif /* Array_h */
