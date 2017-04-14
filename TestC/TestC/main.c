//
//  main.c
//  TestC
//
//  Created by Gene on 4/12/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include <stdio.h>

#include "Sizes.h"
#include "MamaPapa.h"
#include "Macro.h"
#include "Struct.h"
#include "Bits.h"
#include "Array.h"

IDPGenerateFunction(int, %d);
IDPGenerateFunction(char, %c);
IDPGenerateFunction(float, %f);
IDPGenerateFunction(double, %f);
IDPGenerateFunction(long, %lu);

int main(int argc, const char * argv[]) {
//    printSizes();
//    printMamaPapaForValues(0, 1000, 1);
//    
//    IDPCallGeneratedFunction(int, 2)
//    IDPCallGeneratedFunction(char, 'A')
//    IDPCallGeneratedFunction(float, 3.14)
//    IDPCallGeneratedFunction(double, 3.14)
//    IDPCallGeneratedFunction(long, 100)
    
//    printStructOffsets();
//    printOptimizedStructOffsets();
//    printOptimizedStructWithUnionOffsets();
    
//    printValueBits(8);
    
//    IDPArray *array = create();
//    printf("%lu\n", getLength(array));

    printStructSizes();
    
    return 0;
}
