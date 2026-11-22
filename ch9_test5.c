#include <stdio.h>

int main() {
    int arr[4][3];
    int total_sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        int class_sum = 0; 
        for (int j = 0; j < 3; j++) {
            class_sum += arr[i][j];
        }
        printf("%d\n", class_sum); 
        total_sum += class_sum;    
    }

    printf("%d\n", total_sum);

    return 0;
}
