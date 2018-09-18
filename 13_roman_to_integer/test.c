#include "romantointeger.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void testExample() {
    char *input[] = {"IV", "IX", "LVIII", "MCMXCIV"};
    int ans[] = {4, 9, 58, 1994};
    for(int i = 0; i < sizeof(input)/sizeof(input[0]); i++) {
        if (romanToInt(input[i]) != ans[i])
            printf("Example Failed");
    }
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
