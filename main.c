#include <stdio.h>
#include "reports.h"

void displayMainMenu(void);

int main(void)
{
    int choice = 0;

    printf("\n====================================\n");
    printf("  MUNICIPAL FINANCIAL MANAGEMENT SYSTEM (MFMS)\n");
    printf("  Welcome to Windhoek Municipality\n");
    printf("======================================\n");

    do
    {
        displayMainMenu();
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n[Employee Management selected]\n");
                break;

            case 2:
                printf("\n[Budget Management selected]\n");
                break;

            case 3:
                printf("\n[Supplier Management selected]\n");
                break;

            case 4:
                printf("\n[Asset Management selected]\n");
                break;

            case 5:
                reportsMenu();
                break;

            case 6:
                printf("\nExiting MFMS. Goodbye.\n");
                break;

            default:
                printf("\nInvalid choice. Please enter 1-6.\n");
        }

    } while (choice != 6);

    return 0;
}

void displayMainMenu(void)
{
    printf("\n======================================\n");
    printf("                 MAIN MENU\n");
    printf("========================================\n");
    printf("  1. Employee Management\n");
    printf("  2. Budget Management\n");
    printf("  3. Supplier Management\n");
    printf("  4. Asset Management\n");
    printf("  5. Reports\n");
    printf("  6. Exit\n");
    printf("========================================\n");
    printf("Enter your choice: ");
}