int removeDuplicates(int* nums, int numsSize) {                                                                                        
	int n = numsSize, count = 1, j;
	if (numsSize <= 1) {
		return numsSize;
	}
	for (int i = 0; i < numsSize ; ){
		for (j = i + 1; j < numsSize ; j++){
			if (nums[j] != nums[i])
				break;
		}
		if (j < numsSize) {
			nums[count++] = nums[j];
		}
		i = j;
	}
	return count;
}


