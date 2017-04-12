//
//  Macro.h
//  TestC
//
//  Created by Gene on 4/13/17.
//  Copyright © 2017 IDAP. All rights reserved.
//

#ifndef Macro_h
#define Macro_h

#include <stdio.h>

#define IDPGenerateFunction(type, specifier) \
    void output_##type(type value) { \
        printf(#specifier "\n", value); \
    }

#define IDPCallGeneratedFunction(type, value) \
    output_##type(value);

#endif /* Macro_h */
