#include <stdio.h>

int main () {
    int num1, num2, operationCode, result;

    if ( scanf("%d %d %d", &num1, &num2, &operationCode) != 3 ) {
        return 1; // Input Error
    } else {
        switch ( operationCode ) {
            case 1 : // Addition
                result = num1 + num2;
                printf("%d\n", result);
                break;
            case 2 : // Subtraction
                result = num1 - num2;
                printf("%d\n", result);
                break;
            case 3 : // Multiplication
                result = num1 * num2;
                printf("%d\n", result);
                break;
            case 4 : // Division
                result = num1 / num2;
                printf("%d\n", result);
                break;
            default :
                printf("Invalid Operation\n");
        } // end switch
    } // end if-else  
    return 0;
}