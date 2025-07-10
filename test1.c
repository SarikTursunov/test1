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
    printf("Enter an integer number you want: ");             // Corrected scanf usage to read an integer
    scanf("%d", &intnum1);

    printf("Enter a float number with dot you want: ");                // Corrected scanf usage to read a float
    scanf("%f", &flnumber1);

    printf("Enter the mark you want to get. From A to E: "); // Corrected scanf usage to read a character
    scanf(" %c", &charnum1);                                 // Added space before %c to consume any leftover newline character
    // Corrected scanf usage
    
    printf("You entered %d\n", intnum1);
    printf("You entered %f\n", flnumber1);
    printf("Your mark for this task is '%c'\n", charnum1);
    printf("Thank you for using this program.\n");
    return 0;
    

}