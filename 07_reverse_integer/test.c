#include "reverseinteger.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void testExample() {
    int input[] = {123, 12345, 1, 89};
    int ans[] = {321, 54321, 1, 98};
    for(int i = 0; i < sizeof(input)/sizeof(int); i++) {
        if (reverse(input[i]) != ans[i])
            printf("Example Failed");
    }
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
