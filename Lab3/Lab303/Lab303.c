#include <stdio.h>

typedef struct {
    char name[50];
    int studentId;
    float score;
} student;

int main () {
    int N;
    float totalScore, AverageScore;

    if(scanf("%d",&N) != 1) {
        return 1;
    }

    student students[N];

    for(int i = 0 ; i < N ; i++) {
        if(scanf("%d %f %s",&students[i].studentId, &students[i].score, &students[i].name) != 3) {
            return 1;
        }
        totalScore += students[i].score;
    }
    AverageScore = totalScore / N;
    printf("Average Score: %.2f\n", AverageScore);

    return 0;
}