int reverse(int x){
	int n, y;
	int a = x;
	if ((abs(x)) > (pow(2, 32)))
		return 0;
	else if (x == 0 )
		return 0;
	else if (x > 0){
		n = 0;
		y = 0;
		while (x != 0){
			x /= 10;
			n++;}
		for(int i = n; i > 0; i--){
			int b = a % 10;
			a /= 10;
			y = y + b * pow(10, i -1);
		}
		return (y);
	}
	else{
		n = 0;
		y = 0;
		x = -x;
		a = -a;
		while (x != 0){  
			x /= 10;
			n++;}
		for(int i = n; i > 0; i--){
			int b = a % 10;
			a /= 10;
			y = y + b * pow(10, i -1);
		}
		return (-y);
	}}
