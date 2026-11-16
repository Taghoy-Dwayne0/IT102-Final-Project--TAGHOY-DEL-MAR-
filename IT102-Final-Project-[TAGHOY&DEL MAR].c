#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int choice = 0,
    patternchoice = 0, rows = 0, i = 0, j= 0, space = 0, value =0;
    

    float prelim = 0; float midterm = 0; float prefinal = 0; float final = 0;
    float average = 0;

    char word[100];
    int palindrome = 0;
    size_t length, p;

    char tryagain;

    do{

    printf("Options:\n1. The Pattern Generator\n2. Pascal's Triangle\n3. Grade Calculator & Evaluator\n4. Palindrome Checker\n");
    scanf("%d", &choice);
    
    if (choice == 1){
        printf("You have selected The Pattern Generator\n");
        printf("===============MENU===============\n===SELECT SHAPE TO BE GENERATED===\n1.Right Triangle\n2.Square\n3.Isosceles Triangle\n4.Inverted Right Triangle\n5.Christmas Tree\n");
        scanf("%d", &patternchoice);

        
        if (patternchoice == 1){
        printf("You have selected Right Triangle Pattern\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    
    }
    else if (patternchoice == 2){
        printf("You have selected Square Pattern\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (j = 1; j <= rows; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    else if (patternchoice == 3){
        printf("You have selected Isosceles Triangle Pattern\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (space = 1; space <= rows - i; space++)
            {
                printf(" ");
            }

            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    else if (patternchoice == 4){
        printf("You have selected Inverted Right Triangle Pattern\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (i = rows; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    else if (patternchoice ==5)
    {
        printf("You have selected Chrismas Tree pattern\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
         for (i = 1; i <= rows; i++)
        {
            for (space = 1; space <= rows - i; space++)
            {
                printf(" ");
            }

            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
            }

            printf("\n");
        }

        for (i = 1; i <= 2; i++)
        {
            for (space = 1; space < rows; space++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    else{
        printf("Invalid choice. Please select a valid option.\n");
    }

}
    else if (choice == 2){
        printf("You have selected Pascal's Triangle\n");
        printf("Enter the number of rows: ");
        scanf("%d", &rows);

         for (i = 0; i < rows; i++)
        {
            for (space = 1; space <= rows - i; space++)
            {
                printf("   ");
            }

            value = 1;

            for (j = 0; j <= i; j++)
            {
                printf("%6d", value);

                value = value * (i - j) / (j + 1);
            }

            printf("\n");
        }
    }

   
    else if (choice == 3){
        printf("You have selected Grade Calculator & Evaluator\n");

    printf("Enter Prelim Grade: ");
    scanf("%f", &prelim);

    printf("Enter Midterm Grade: ");
    scanf("%f", &midterm);

    printf("Enter Pre-Final Grade: ");
    scanf("%f", &prefinal);

    printf("Enter Final Grade: ");
    scanf("%f", &final);

    average = (prelim + midterm + prefinal + final) / 4;

    printf("\n ===FINAL GRADE RESULT=== \n");

    printf("Prelim Grade: %.2f\n", prelim);
    printf("Midterm Grade: %.2f\n", midterm);
    printf("Pre-Final Grade: %.2f\n", prefinal);
    printf("Final Grade: %.2f\n", final);

    printf("\nFinal Average: %.2f\n", average);

    if (average <= 3.00)
    {
        printf("Status: PASS\n");
    }
    else
    {
        printf("Status: FAIL\n");
    }
    }
    
    else if (choice == 4){
        printf("You have selected Palindrome Checker\n");
         printf("Enter a word: "); 
    scanf("%99s", word);

    length = strlen(word);
    palindrome = 1;

    for (p = 0; p < length / 2; p++)
    {
        if (tolower(word[p]) != tolower(word[length - 1 - p]))
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("%s is a Palindrome.\n", word);
    else
        printf("%s is not a Palindrome.\n", word);
}
    
    else{
        printf("Invalid choice. Please select a valid option.\n");
    }

    printf("\nDo you want to try another operation? (Y/N): ");
    scanf(" %c", &tryagain);

    printf("\n----------------------------------------\n");

}   
    while (tryagain == 'Y' || tryagain == 'y');

    printf("Thank you for using the program :)\n");

    return 0;
}