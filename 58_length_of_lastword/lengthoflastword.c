#include <string.h>
int lengthOfLastWord(char* s) {
	int n = strlen(s), i, j = 0, k = n - 1;
	if (n == 0)
		return j;
	else{ 
		while(s[k] == ' '){
			k--;
		}
		for (i = k; s[i] != ' ' && (i >= 0);i--){    
			j++;
		}
		return j;
	}
}
