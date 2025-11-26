#include <stdio.h>

int main () {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    if ( scanf("%d", &score) != 1 ) {
        return 1;
    }

    while ( score != -1 ) {

        if ( score >= 80 && score <= 100 )
            countA += 1;
        if ( score >= 70 && score < 80 )
            countB += 1;
        if ( score >= 60 && score < 70 )
            countC += 1;
        if ( score >= 50 && score < 60 )
            countD += 1;
        if ( score < 50 && score >= 0 ) 
            countF += 1;

        if ( scanf("%d", &score) != 1 ) {
            break;
        }
    }

    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);

    return 0;
}