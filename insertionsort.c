#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int insertionsort(int arr[], int n){
	int j;
	for(int i = 0;i < n;i++){
		int t = arr[i+1];
		for (j = i;j >=  0 && arr[j] > t;j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = t;
	}}
int printarray(int *arr, int n){
	for (int i = 0;i < n;i++)
		printf("%d\t",arr[i]);
		}
int main(){	
	int i,j,n,t;
	printf("请输入数组长度");
	scanf("%d", &n);
	int *arr = (int*)malloc(n*sizeof(int)); 
	for(i = 0; i < n;i++){
	scanf("%d",&arr[i]);//memset?? how to stop autolly?
	}
	insertionsort(arr, n);
	printarray(arr, n);
	free(arr);
	return 0;
}

