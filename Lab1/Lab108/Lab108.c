#include <stdio.h>

int main() {
    int dayCode, hour;
    
    if ( scanf("%d %d", &dayCode, &hour) != 2 ) {
        return 1;   
    }

    switch ( dayCode ) {
        case 1 : // Monday
            if ( hour >= 8 && hour <= 17 ) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 2 : // Tuesday
            if ( hour >= 8 && hour <= 17 ) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 3 : // Wednesday
            if ( hour >= 8 && hour <= 17 ) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 4 : // Thursday
            if ( hour >= 8 && hour <= 17 ) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 5 : // Friday
            if ( hour >= 8 && hour <= 17 ) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
        case 6 : // Saturday
            printf("Weekend Relax Mode\n");
            break;
        case 7 : // Sunday
            printf("Weekend Relax Mode\n");
            break;
        default : // dayCode not in 1-7
            printf("Invalid Day Code\n");
            break;
    }
    
    return 0;
}