//
//  MamaPapa.c
//  TestC
//
//  Created by Gene on 4/12/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include "MamaPapa.h"

#define IDPPrintIterationNumber(iteration) \
    if (10 > iteration) { \
        printf("# 00%d: ", iteration); \
    } else if (100 > iteration && 10 <= iteration) { \
        printf("# 0%d: ", iteration); \
    } else { \
        printf("# %d: ", iteration); \
    }

//static const char * IDPMama = "mama";
static const char * const IDPMama = "mama";
static const char * const IDPPapa = "papa";

static void printMamaPapaForValue(int value);

void printMamaPapaForValues(int location, int destination, int step) {
    for (int i = location; i < destination; i += step) {
        IDPPrintIterationNumber(i);
        printMamaPapaForValue(i);
    }
    
//    printf("IDPMama: %s\n", IDPMama);
//    
//    IDPMama = "papa";
//    
//    printf("IDPMama: %s\n", IDPMama);
}

static void printMamaPapaForValue(int value) {
    if (0 == value % 3) {
        printf("mama");
    }
    
    if (0 == value % 5) {
        printf("papa");
    }
    
    printf("\n");
}
