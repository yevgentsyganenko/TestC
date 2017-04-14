//
//  Bits.c
//  TestC
//
//  Created by Gene on 4/13/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include "Bits.h"

static const uint8_t BitsPerByte = 8;
static const uint8_t Mask = 128;

void printBits(void *valueRef, int length);
void printByte(uint8_t value);

void printValueBits(int value) {
    printBits(&value, sizeof(value));
}

void printBits(void *ref, int length) {
    uint8_t *valueRef = ref;
    
    for (int i = 0; i < length; i++) {
        printByte(valueRef[i]);
        printf(" ");
    }
    
    printf("\n");
}

void printByte(uint8_t value) {
    for (int i = 0; i < BitsPerByte; i++) {
        printf("%u", 0 != (Mask & value));
        value <<= 1;
    }
}
