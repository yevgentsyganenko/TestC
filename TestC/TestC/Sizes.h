//
//  Sizes.h
//  TestC
//
//  Created by Gene on 4/12/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#ifndef Sizes_h
#define Sizes_h

#include <stdio.h>

#define IDPPrintTypeSize(type) \
    printf("Size of %s: %lu\n", #type, sizeof(type));

void printSizes();

#endif /* Sizes_h */
