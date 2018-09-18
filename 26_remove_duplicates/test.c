#include "removeduplicates.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testExample() {
    int input[] = {1, 1, 3};
    int ans = 2;
    if (removeDuplicates(input, 3) != ans)
        printf("Example Failed");
    else
    	printf("Example Pass");
}

int main() {
    testExample();
    return 0;
}
