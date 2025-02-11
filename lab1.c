#include <stdio.h>
#include <stdbool.h> //In order to use bool
#include <string.h> //In order to use strcmp()

// notice this function is "void" it is not
// going to return anything back to the calling
// function aka "main"
void printRecords(){

    printf("\n\nYou have entered the Print all records function\n\n");
    printf("'Printed all records'\n\n");

}

void addRecords() {

    int number;
    char name[50]; //String creation name
    float size;
    char metric[50]; //String creation metric
    float cost;

    printf("\nWhat is the part number?:\n");
    scanf("%d", &number);

    printf("\nWhat is the name of the part?:\n");
    scanf("%s", name);

    printf("\nWhat is the part size?:\n");
    scanf("%f", &size);

    printf("\nWhat is the part metric?:\n");
    scanf("%s", metric);

    printf("\nWhat is the cost?:\n");
    scanf("%f", &cost);

    printf("\nOkay, your output is:\n");
    printf("Part number: %d\n", number);
    printf("Part name: %s\n", name);
    printf("Part size: %.2f\n", size);
    printf("Part metric: %s\n", metric);
    printf("Part cost: %.2f\n", cost);

}

void deleteRecord() {
    printf("\nSimply I'm here to tell you that you have deleted a record... (You have entered the delete last record function)\n");
}

void printNumRecord() {
    printf("\nYou have simply entered the Print number of records function\n");
}

void printDataBaseSize() {
    printf("\nYou have simply entered the Print database size function\n");
}

void printNumChange(bool print) {
    static int changes = 0;

    if (print) {
        printf("\nYou have modified the database %d times\n", changes);
    }
    else {
        changes++;
        printf("\n%d modification so far\n", changes);
    }

}

void passValue(int mySelection){

    printf("\nInvoking the passValue Function\n");
    printf("\n\nYou entered: %d\n\n", mySelection);

}

int passAndReturn(int sampleValue){

    printf("\n\nInvoking the passAndReturn Function\n");
    printf("\nYou entered: %d\n", sampleValue);
    printf("\nChanging it to a 7 which will end the program - buh bye!\n\n");
    return(7);

}

int main() {

    int looper = 6;
    int selection;

    while (looper <= 6){

        printf("\n\nParts Inventory Manager\n\n");
        printf("1. Print all records\n");
        printf("2. Add a Record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print the size of the database\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n\n");
        // printf("8. Pass a Value\n");
        // printf("9. Pass and Return a Value\n");

        printf("Please enter your selection: ");
        scanf("%d", &selection);

        switch (selection) {

            case 1:
                printRecords();
                break;

            case 2:
                addRecords();
                break;

            case 3:
                deleteRecord();
                break;
            
            case 4:
                printNumRecord();
                break;

            case 5:
                printDataBaseSize();
                break;

            case 6:

                bool print;
                char user_input[1];

                printf("\nPrint out the number of changes to the database (Type a)\n");
                printf("\nor\n");
                printf("\nIncrement the changes to the database by 1 (Type b)\n");

                scanf("%s", user_input);

                if (strcmp(user_input, "a") == 0) {
                    print = true;
                }
                else {
                    print = false;
                }

                printNumChange(print);

                break;
            
            case 7:
                printf("\n\nExiting Now...\n\n");
                looper = selection;
                break;

            // case 8:

            //     passValue(selection);
            //     break;
            
            // case 9:

            //     looper = passAndReturn(selection);
            //     break;

        }

    }

    //return 0 lets the operating system know we gracefully ended our program
    return 0;

}