#include<stdio.h>

void quick_sort(int arr[],int l,int r){
	if(l>=r) 
		return;
	int i=l,j=r;
	int pivot = arr[l];
	while(i<j){
		while(i<j && arr[j]>=pivot)	j--;
		arr[i] = arr[j];
		while(i<j && arr[i]<=pivot)	i++;
		arr[j] = arr[i];
	}
	arr[i] = pivot;
	quick_sort(arr,l,i-1);
	quick_sort(arr,i+1,r);
} 
void arr_print(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("\t%d",arr[i]);
	}
}
int main(){
	int arr[5] = {23,59,19,67,34};
	arr_print(arr,5);
	quick_sort(arr,0,4);
	printf("\n");
	arr_print(arr,5);
}
