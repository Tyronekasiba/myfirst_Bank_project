#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /* welcome message */
    printf("Welcome to my bank\n");

    /* creating an account for the users */
    char Firstname[60], Lastname[60];

    printf("Create your Bank account.\n");
    scanf("%s %s", Firstname, Lastname);

    char password[30];
    char val[20];
    int value;
    int i = 3;
    int passwordcorrect = 0;
    
    printf("Create password: ");
    scanf("%s", password);

    printf("Confirm password: ");
    scanf("%s", val);

    value = strcmp(password, val);
    if (value != 0) {
        while (i >= 0) {
            printf("\nYour passwords don't match.!!\n");
            printf("\nTry again, enter password: ");
            scanf("%s", password);

            printf("Confirm password: ");
            scanf("%s", val);

            value = strcmp(password, val);

            if (value == 0) {
                passwordcorrect = 1;
                break;
            }

            if (i > 0)
                printf("Invalid password. %d attempts remaining!\n", i);
            else
                printf("Sorry, we cannot complete your account.\n");

            i--;
        }
    } else {
        passwordcorrect = 1;
    }

    if (passwordcorrect) {
        printf("Password correct\n");
        printf("You have 100k sh/= for your first deposit.\n");
        char option;
        int exitProgram = 0; // Variable to control loop
        
        while (!exitProgram) {
            printf("Menu\n");
            printf("1. Deposit money\n");
            printf("2. Transfer money\n");
            printf("3. Check balance\n");
            printf("4. Exit\n");

            printf("Select an option: ");
            scanf(" %c", &option);

            // Handle user input and perform corresponding actions
            // Add appropriate code here to handle menu options
            
            switch (option) {
                case '1':
                    printf("Deposit money\n");
                    // Add code to handle deposit money
                    break;
                case '2':
                    printf("Transfer money\n");
                    // Add code to handle transfer money
                    break;
                case '3':
                    printf("Check balance\n");
                    // Add code to handle check balance
                    break;
                case '4':
                    exitProgram = 1; // Set exitProgram to 1 to exit the loop
                    break;
                default:
                    printf("Invalid option. Please select a valid option.\n");
                    break;
            }
        }
    }

    return 0;
}

