#include "sum.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testExample() {
    int input[] = {1, 2, 3, 4, 5};
    int ans[] = {0, 1};
    if (memcmp(sum(input, 5, 3), ans, 2))
        printf("Example Failed");
    else
    	printf("Example Pass");
}

int main() {
    testExample();
    return 0;
}
