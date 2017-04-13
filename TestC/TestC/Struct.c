//
//  Struct.c
//  TestC
//
//  Created by Genek on 4/13/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include <stdbool.h>
#include <stddef.h>

#include "Struct.h"
#include "Sizes.h"

#define IDPPrintOffset(element, structType) \
    printf("Offset of " #element ": %lu", offsetof(struct structType, element));

#define IDPPrintOffsetAndSize(element, type, structType) \
    IDPPrintOffset(element, structType) \
    printf(", "); \
    IDPPrintTypeSize(type)

struct IDPStruct {
    bool boolValue1;
    bool boolValue2;
    bool boolValue3;
    bool boolValue4;
    bool boolValue5;
    bool boolValue6;
    
    float floatValue;
    
    int intValue;
    
    long long longlongValue;
    
    short shortValue1;
    short shortValue2;
    short shortValue3;
    
    double doubleValue;
    
    char *string;
};

struct IDPOptimizedStruct {
    long long longlongValue;
    
    double doubleValue;
    
    char *string;
    
    bool boolValue1;
    bool boolValue2;
    bool boolValue3;
    bool boolValue4;
    bool boolValue5;
    bool boolValue6;
    
    short shortValue1;
    short shortValue2;
    short shortValue3;
    
    float floatValue;
    
    int intValue;
};

union IDPUnion {
    struct {
        bool boolValue1;
        bool boolValue2;
        bool boolValue3;
        bool boolValue4;
        bool boolValue5;
        bool boolValue6;
    };
    
    char string[10];
};

void printStructOffsets() {
    printf("IDPStruct offsets:\n");
    IDPPrintOffsetAndSize(boolValue1, bool, IDPStruct)
    IDPPrintOffsetAndSize(boolValue2, bool, IDPStruct)
    IDPPrintOffsetAndSize(boolValue3, bool, IDPStruct)
    IDPPrintOffsetAndSize(boolValue4, bool, IDPStruct)
    IDPPrintOffsetAndSize(boolValue5, bool, IDPStruct)
    IDPPrintOffsetAndSize(boolValue6, bool, IDPStruct)
    IDPPrintOffsetAndSize(floatValue, float, IDPStruct)
    IDPPrintOffsetAndSize(intValue, int, IDPStruct)
    IDPPrintOffsetAndSize(longlongValue, long long, IDPStruct)
    IDPPrintOffsetAndSize(shortValue1, short, IDPStruct)
    IDPPrintOffsetAndSize(shortValue2, short, IDPStruct)
    IDPPrintOffsetAndSize(shortValue3, short, IDPStruct)
    IDPPrintOffsetAndSize(doubleValue, double, IDPStruct)
    IDPPrintOffsetAndSize(string, char *, IDPStruct)
    printf("\n");
}

void printOptimizedStructOffsets() {
    printf("IDPOptimizedStruct offsets:\n");
    IDPPrintOffsetAndSize(longlongValue, long long, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(doubleValue, double, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(string, char *, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue1, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue2, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue3, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue4, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue5, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(boolValue6, bool, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(shortValue1, short, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(shortValue2, short, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(shortValue3, short, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(floatValue, float, IDPOptimizedStruct)
    IDPPrintOffsetAndSize(intValue, int, IDPOptimizedStruct)
    printf("\n");
}

void printStructSize() {
    
}
