//
//  Sizes.c
//  TestC
//
//  Created by Gene on 4/12/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#include "Sizes.h"

void printSizes() {
    IDPPrintTypeSize(char)
    IDPPrintTypeSize(int)
    IDPPrintTypeSize(short)
    IDPPrintTypeSize(long)
    IDPPrintTypeSize(float)
    IDPPrintTypeSize(double)
    IDPPrintTypeSize(long double)
    IDPPrintTypeSize(void)
    IDPPrintTypeSize(void *)
    IDPPrintTypeSize(int *)
    IDPPrintTypeSize(long double *)
}
