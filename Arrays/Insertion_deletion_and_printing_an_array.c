#include <stdio.h>
int main() {
    int arr[6]={1,2,3,4,5,6};
    //accessing all elements
    int i;
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //inserting an element in between
    printf("\n INSERTION OF ELEMENT\n");
    int temp,location;
    printf("Enter the index for insertion : ");
    scanf("%d",&location);
    printf("Enter the element for insertion : ");
    scanf("%d",&temp);
    int newarr[7];
    int size = sizeof(arr)/sizeof(arr[0]);
    newarr[location]=temp;
    for(i=0;i<location;i++){
        newarr[i]=arr[i];
    }
    for(int j=location+1;j<size+1;j++){
        newarr[j]=arr[j-1];
    }
    
    printf("The new array is : ");
    for(i=0;i<size+1;i++){
        printf("%d ",newarr[i]);
    }
    printf("\nDELETION OF ELEMENT\n");
    int del_ind;
    printf("Enter the index for deletion : ");
    scanf("%d",&del_ind);
    int delarr[5];
    for(i=0;i<del_ind;i++){
        delarr[i]=arr[i];
    }
    for(i=del_ind;i<size-1;i++){
        delarr[i]=arr[i+1];
    }
    for(i=0;i<size-1;i++){
        printf("%d ",delarr[i]);
    }
    return 0;
}
