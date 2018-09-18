#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char intToChar(int a) {
    char b;
    b = (char)(a + 48);
    return b;
}
//be clear about char to int, int to char!
char* addBinary(char* a, char* b) {
          int n = strlen(a) - 1;
          int m = strlen(b) - 1;
          int c = 0, d, e;
          char *sum = (char*)malloc((n + m + 3) * sizeof(char));
          char *result = (char*)malloc((n + m +3) * sizeof(char));
          for (e = 0;n >= 0 && m >= 0;n--,m--,e++){
                  d = a[n] - '0'+ b[m] - '0' + c;
                  c = d / 2;
                  sum[e] = intToChar(d % 2);//strcat用于两个字符串相加               
          }
          while (n >= 0){
                  d = a[n--] - '0' + c;
                  c = d / 2;
                  sum[e++] = intToChar(d % 2);
          }
          while (m >= 0){
                  d = b[m--] - '0' + c;
                  c = d / 2;
                  sum[e++] = intToChar(d % 2);
          }
          if (c == 1)
                  sum[e] = '1';
          for(n = (strlen(sum) - 1),m = 0;n >= 0;n--, m++)
                  result[m] = sum[n]; 
          return result;
}
