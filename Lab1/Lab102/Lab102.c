#include <stdio.h>

int main() {
    int score; 

    if (scanf("%d", &score) != 1) { // Input error
        return 1;
    } else if ( score >= 80 ) { // Grade A
        printf("Grade A\n");
    } else if ( score >=70 ) { // Grade B
        printf("Grade B\n");
    } else if ( score >= 60 ) { // Grade C
        printf("Grade C\n");
    } else if ( score >= 50 ) { // Grade D
        printf("Grade D\n");
    } else if ( score < 50 ){ // Grade F
        printf("Grade F\n");
    } // end if-else chain
    return 0;
}