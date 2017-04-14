//
//  Array.c
//  TestC
//
//  Created by Genek on 4/14/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "Array.h"

static const size_t IDPDefaultLength = 8;

struct IDPArray {
    void *data;
    size_t length;
};

IDPArray *create() {
    // sizeof(*array) ?
    IDPArray *array = calloc(1, sizeof(IDPArray));
    
    array->data = array;
    array->length = IDPDefaultLength;
    
    return array;
}

void dealloc(IDPArray *array) {
    free(array);
}

size_t getLength(IDPArray *array) {
    return array->length;
}

void setLength(size_t newLength, IDPArray *array) {
    size_t currentLength = array->length;
    
    if (newLength == currentLength) {
        return;
    }
    
    array->data = realloc(array, newLength);
    array->length = newLength;
    
    if (newLength > currentLength) {
        memset(array + currentLength, 0, newLength - currentLength);
    }
}
