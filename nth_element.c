#include<stdio.h>

int nth_element(int arr[],int n,int l,int r){
	int pivot = arr[l];
	int i=l,j=r;
	while(i<j){
	while(i<j && arr[j]>pivot)	j--;
	arr[i] = arr[j];
	while(i<j && arr[i]<=pivot)	i++;
	arr[j] = arr[i];
	}
	arr[i] = pivot;
	if(i<n){
		return nth_element(arr,n,i+1,r);
	}
	else if(i>n){
		return nth_element(arr,n,l,i-1);
	}
	else{
		return i;
	}
}
int main(){
	int len,n;
	scanf("%d %d",&len,&n);
	int arr[len];
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	int pos = nth_element(arr,n,0,len-1);
	printf("%d",arr[pos]);
}
