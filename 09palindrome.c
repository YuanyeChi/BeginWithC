bool isPalindrome(int x) {                                                                                                            
	int a = x;
	int y = 0;
	int c = x;
	if (x < 0)
		return 0;
	else if (x == 0)
		return 1;
	else{
		int n = 0;             
		while (x != 0){
			x /= 10;
			n++;}
		for(int i = n; i > 0; i--){
			int b = a % 10;
			a = a / 10;
			y = y + b*pow(10, i-1);
		}
		if (c == y)
			return 1;
		else
			return 0;
	}

}


