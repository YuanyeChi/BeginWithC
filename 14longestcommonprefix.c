char* longestCommonPrefix(char** strs, int strsSize) {
	int i, count = 0;
	char *result = malloc(1000);
	while (strsSize > 0){
		char c = strs[0][count];
		for (i = 1; i < strsSize;  i++)
			if (c != strs[i][count]) break;
		if (i == strsSize && c != '\0')
			result[count++] = c;
		else break;
	}
	result[count++] = '\0';
	return result;
}

