#include <stdio.h>

int main() {
    int N,count=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
