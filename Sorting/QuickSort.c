#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[],int start, int end){
    if(start>=end) return;
    int temp;
    int i =start-1;
    int mid;
    int j = start;
    int pivot = arr[end];
    while(j<=end){
        if(arr[j]<=pivot){
            i++;
            mid=i;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
        else j++;
    }
    //no need to create left and right arrays here,
    //quicksort changes positions within same array
    quicksort(arr,start,mid-1);
    quicksort(arr,mid+1,end);
}

int main(){
    int arr[] = {1,4,7,2,8,4,9,2,3,6,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i =0; i<n;i++){
        printf("%d ",arr[i]);
    }
}
