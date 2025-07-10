#include <stdio.h>

int main() {
   /* printf("Hello, World!\n");
    printf("This is a test file.\n");
    printf("Trying to connect Git to VS Code.\n");
    printf("Ops. looks like works.\n");
    printf("Yeah, Works> Finally!\n");
    printf("C17 language standard version is being used.\n");
    printf("This is a simple C program.\n");
    */

    int intnum1;
    float flnumber1;
    char charnum1 = 'A';

    scanf("%d", &intnum1);
    scanf("%f", &flnumber1);
    printf("Enter the Mark you want to get. From A to E: ");
    scanf(" %c", &charnum1); // Added space before %c to consume any leftover newline character

    // Corrected scanf usage
    printf("You entered %d\n", intnum1);
    printf("You entered %f\n", flnumber1);
    printf("Your mark for this task is %c\n", charnum1);

    return 0;
}