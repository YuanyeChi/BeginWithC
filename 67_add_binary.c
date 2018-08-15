#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char* addBinary(char* a, char* b) {
	int n = strlen(a);
	int m = strlen(b);
	int c = 0, d, e;
	char* sum = (char*)calloc(n + m + 1, sizeof(char));
	sum[0] = '\0';
	char* result = (char*)calloc(n + m +1,sizeof(char));
	for (e = 1;n >= 0, m >= 0;n--, m--, e++){
	        d = a[n] + '0'+ b[n] + '0' + c;
		c = d/2;
	        sum[e] = (char)(d % 2);//strcat用于两个字符串相加
	}
	while (n >=0){
		d = a[n] + '0' + c;
		c = d/2;
	        sum[e] = (char)(d % 2);
		e++;
	}
	while (m >=0){
		d = b[n] + '0' + c;
		c = d/2;
	        sum[e] = (char)(d % 2);
		e++;
	}
	while (c == 1)
	        sum[e] = (char)(d % 2); 
	for(n = strlen(sum),m = 0;n >= 0;n--, m++)
		result[m] = sum[n];
	return result;
	free(sum);
	free(result);

}
int main(){
	char a[30], b[30];
	char* result = (char*)calloc(30, sizeof(char));
	printf("Input a: ");
	scanf("%s", a);//2011年取消gets
	printf("Input b: ");
	scanf("%s", b);
	result = addBinary(a, b);
	printf("%s", result);
	free(result);
	return 0;
	}
