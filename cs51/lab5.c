#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getHex(int num) {
    if (num >= 0 && num <= 9) { return (num + '0');}
    else if (num == 10) { return 'A'; }
    else if (num == 11) { return 'B'; }
    else if (num == 12) { return 'C'; }
    else if (num == 13) { return 'D'; }
    else if (num == 14) { return 'E'; }
    else  return 'F'; 
}

int main() {
    int num; 
    printf("Enter a number between 0 and 15 or -1 to quit: ");
    scanf("%d", &num);
    while (num != -1) {
        if ( num >= 0 && num <= 15) { printf("The number is %d is %c in hex.\n", num, getHex(num)); }
        else { printf("%d is not a valid number for this program.\n", num); }
        printf("Enter a number between 0 and 15 or -1 to quit: ");
        scanf("%d", &num);

    }
    printf("Author: Gabriel Carrera Rosas");
    return 0;
}