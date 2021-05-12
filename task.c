#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
        BCode headBC = NULL;
        CCard headCC = NULL;
        int choice;
        int sum = 0;
        FILE* outputBarCode;
        FILE* outputCreditCard;
        do {
                system("cls");
                printf("1. Read barcodes from file\n");
                printf("2. Add new barcode\n");
                printf("3. Show barcode\n");
                printf("4. Delete barcode\n");
                printf("5. Save barcodes in file\n");
                printf("--------------------------------\n");
                printf("6. Read credit cards from file\n");
                printf("7. Add new credit card\n");
                printf("8. Show credit cards\n");
                printf("9. Delete credit card\n");
                printf("10. Save credit cards in file\n");
                printf("--------------------------------\n");
                printf("11. Add new purchase\n");
                printf("--------------------------------\n");
                printf("12. Exit\n\n");
                printf("You choice: ");
                choice = ReadNumber();
                while (choice < 1 || choice > 12){
                        printf("Wrong number");
                        choice = ReadNumber();
                }
                system("cls");
                switch (choice) {
                case 1:
                        headBC = ReadBarCodesFromFile(headBC);
                        system("pause");
                        break;
                case 2:
                        headBC = AddNewBarCode(headBC);
                        system("pause");
                        break;
                case 3:
                        ShowBarCode(headBC);
                        system("pause");
                        break;
                case 4:
                        headBC = DeleteBarCode(headBC);
                        system("pause");
                        break;
                case 5:
                        outputBarCode = fopen("barcode.txt", "w");
                        SaveBarCodesInFile(headBC, outputBarCode);
                        fclose(outputBarCode);
                        system("pause");
                        break;
                case 6:
                        headCC = ReadCreditCardsFromFile(headCC);
                        system("pause");
                        break;
                case 7:
                        headCC = AddNewCreditCard(headCC);
                        system("pause");
                        break;
                case 8:
                        ShowCreditCard(headCC);
                        system("pause");
                        break;
                case 9:
                        headCC = DeleteCreditCard(headCC);
                        system("pause");
                        break;
                case 10:
                        outputCreditCard =fopen("creditcard.txt", "w");
                        SaveCreditCardInFile(headCC, outputCreditCard);
                        fclose(outputCreditCard);
                        system("pause");
                        break;
                case 11:
                        headBC = ReadBarCodesFromFile(headBC);
                        headCC = ReadCreditCardsFromFile(headCC);
                        sum = Purchase(headBC);
                        sum = UseCreditCard(sum, headCC);
                        system("pause");
                        break;
                case 12: 
                        return 0;
                default:
                        printf("Wrong number");
                        break;
                }
        } while (1);
    return 0;
}