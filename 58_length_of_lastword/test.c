#include "lengthoflastword.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testExample() {
    char *input[] = {"Hello World", "hello world!!!"};
    int ans[] = {5, 8};
    for(int i = 0; i < sizeof(input)/sizeof(input[0]); i++) {
        if (lengthOfLastWord(input[i]) != ans[i])
            printf("Example Failed");
    }
    printf("Example pass");
}

int main() {
    testExample();
    return 0;
}
