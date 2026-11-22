#include <stdio.h>

int main(){
    int arr[100];
    int n;

    scanf("%d", &n);

    arr[0] = 100;
    arr[1] = n;

    int i = 1;
    while(1){
        arr[i + 1] = arr[i - 1] - arr[i];

        i++;

        if(arr[i] < 0){
            break;
        }
    }
    for(int j = 0; j <= i; j++){
        printf("%d", arr[j]);
    }
    printf("\n");

    return 0;
}
