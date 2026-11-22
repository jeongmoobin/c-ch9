#include <stdio.h>

int main() {
    int score[3][3];
    int student_total[3] = {0, }; 
    int subject_total[3] = {0, }; 
    int total_sum = 0;            

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
            student_total[i] += score[i][j]; 
            subject_total[j] += score[i][j]; 
            total_sum += score[i][j];        
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", score[i][j]);
        }
        printf("%d\n", student_total[i]);
    }
    for (int j = 0; j < 3; j++) {
        printf("%d ", subject_total[j]);
    }
    printf("%d\n", total_sum);

    return 0;
}
