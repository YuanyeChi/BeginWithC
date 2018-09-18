#include <stdbool.h>
#include <stdio.h>
#include <math.h>
bool isPalindrome(int x) {                
	int a = x;
                                                                                            
	if (x == 0) {
		return true;
	}
	if (x < 0) {
		return false;
	}
	int y = 0;
	while (x) {
		y = y * 10 + x % 10;
		x /= 10;
	}
	return a == y;
}


