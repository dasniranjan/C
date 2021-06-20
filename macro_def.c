

/* Demonstrating Stringize and Token-pasting operator in C */

#include <stdio.h>

#define STR_PRINT(x) #x             // This Macro stringize operator #, converts token into string
#define MERGE(a, b) _##a##b         // This Macro token pasting operator ##, concatenate two tokens into one string
#define MERGE2(a, b) a##b##one

int main () {

    float MERGE(x1, y1);            // Here we have used pre-processor token pasting op to create a variable name which would be _x1y1
    _x1y1 = 12.6999;


    float MERGE2(x1, y1);           // Here we have used pre-processor token pasting op to create a variable name which would be x1y1one
    x1y1one = 15.69999;

    /* In the printf statement below, calling pre-processor token pasting op to get the value assigned above instead of using the variable name */

    printf("\n\nValue of x1x2one is: %f", MERGE(x1, y1));

    printf("\n\nValue of x1x2one is: %f\n\n", MERGE2(x1, y1));

    /* In the printf statement below, calling pre-processor stringize operator to print a string without quotes */

    printf(STR_PRINT(Hello... This is string without double quote.. !!));

    printf("\n\n");
    return 0;
}

