#define bool int
#define true 1
#include "palindrome.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void testExample() {
    int input[] = {123, 121};
    int ans[] = {0, 1};
    for(int i = 0; i < sizeof(input)/sizeof(int); i++) {
        if (isPalindrome(input[i]) != ans[i])
            printf("Example Failed");
    }
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
