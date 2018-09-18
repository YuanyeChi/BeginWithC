#include "addbinary.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testExample() {
    char *input1 = "10000011";
    char *input2 = "111000";
    char ans[] = "10111011";
    if (strcmp(addBinary(input1, input2), ans) != 0)
        printf("Example Failed");
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
