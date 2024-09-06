#include<stdio.h>
int main(){
    int arr[4];
    int max=arr[0];

    for(int i=0; i<4; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<4; i++){
        if(arr[i] > max){
            max= arr[i];
        }
    }

    for(int i=0; i<4; i++){
        if(max !=arr[i]){
            int quiz= max-arr[i];
            printf("%d ",quiz);
        }
    }
    return 0;


}
