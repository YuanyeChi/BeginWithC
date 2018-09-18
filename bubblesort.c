#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *arr1,int *arr2){
	int temp=*arr1;
	*arr1 = *arr2;
	*arr2=temp;
}
void bubblesort(int *arr,int n){
	for (int i=0;i<n-1;i++)
		for (int j=0;j<i;j++){
			if (arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}}
void printarray(int arr[],int n){
	int i=0;
	while(i<n){
		printf("%d",arr[i]);
		i += 1;
	}}
int main()
{
	int arr[] = {11 ,33 ,22 ,55 ,54 ,66};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	printf("sorted array:\n");
	printarray(arr,n);
	return 0;
}
