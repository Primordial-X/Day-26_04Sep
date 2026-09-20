#include <stdio.h>
#include <math.h>

//Q51: Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/


int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

int main() {
    int i, j;

    // First block of stars
    for (i = 0; i < 4; i++) {
        printf("*\n");
    }
    printf("\n");

    // Second block of stars
    for (i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third block of stars
    for (i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth block of stars
    printf("*\n");

    return 0;
}

