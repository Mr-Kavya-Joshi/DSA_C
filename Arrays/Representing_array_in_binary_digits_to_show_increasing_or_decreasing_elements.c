#include <stdio.h>
int main(){
    //identifying patterns in arrays and representing it as a sequence of 0 and 1 as per
    int orig_arr[7]={2,8,4,0,3,1,9};
    int new_arr[8];
    int size = sizeof(orig_arr)/sizeof(orig_arr[0]);
    for(int i=0;i<size-1;i++){
        if (orig_arr[i]>orig_arr[i+1]){
            printf("%d",1);
        }
        else printf("%d",0);
    }
}
