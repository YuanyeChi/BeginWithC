int* sum(int* num, int numsize, int target){
	int *a = (int*)malloc(2*sizeof(int));
	for(int i = 0; i < numsSize;i++)
	{
		for(int j = i+1; (j < numsSize && j != i);j++)
		{
			if(nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
			}
		}
	}
	return a;
}
