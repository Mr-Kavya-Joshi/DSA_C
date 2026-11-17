#include <stdio.h>
#include <stdlib.h>
// mid = [right + (right - left)]/2
void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    //sizes of left and right subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int leftArr[n1], rightArr[n2];
    //putting data into these created subarrays
    for(i=0;i<n1;i++){
        leftArr[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        rightArr[j] = arr[mid+1+j];
    }
    //combining the subarrays into the previous array - in the ascending order of values of elements.
    i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(leftArr[i]<rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    //Now inserting remaining values, if any into the combined array
    while(i<n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
    //left array -> 0 to mid
    // right array -> mid+1 to right
}

void mergeSort(int arr[],int right,int left){
    if(left<right){
        int mid = left + (right-left)/2;
        mergeSort(arr,mid,left);
        mergeSort(arr,right,mid+1);
        merge(arr,left,mid,right);
    }
}

int main() {
    int arr[] = { 1,6,3,9,6,0,4,6,8,2,1,3,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Sorting arr using mergesort
    mergeSort(arr, n - 1,0);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
