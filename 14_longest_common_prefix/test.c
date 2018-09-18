#include "longestcommonprefix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testExample() {
    char *input[] = {"flower", "flow", "flight"};
    char ans[] = "fl";
    if (strcmp(longestCommonPrefix(input, 3), ans) != 0)
    	printf("Example Failed");
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
