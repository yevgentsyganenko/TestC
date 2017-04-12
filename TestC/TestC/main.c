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

int main(int argc, const char * argv[]) {
    printSizes();
    printMamaPapaForValues(0, 1000, 1);
    
    return 0;
}
