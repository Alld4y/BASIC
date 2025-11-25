#include <stdio.h>

int main () {
    int clearanceLevel, age, isActive;

    if ( scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3 ) {
        return 1;
    } else if ( clearanceLevel == 3 && isActive == 1 ) {
        printf("Access Granted");
    } else if ( clearanceLevel == 2 && age >= 25 && isActive == 1 ) {
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }

    return 0;
}

