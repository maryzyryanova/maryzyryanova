#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>

typedef struct barcode
{
        int key;
        char* name;
        int price;
        struct barcode* next;
        struct barcode* prev;
} barcode;
typedef struct barcode* BCode;

typedef struct creditcard
{
        int numofcard;
        int sale;
        struct creditcard* next;
        struct creditcard* prev;
} creditcard;
typedef struct creditcard* CCard;

int ReadNumber();
int ReadBarCode();
int ReadNumProduct();
int ReadNumOfCard();
int Purchase(BCode headbarcode);
int UseCreditCard(int sum, CCard headcreditcard);
BCode ReadBarCodesFromFile(BCode headBC);
BCode AddNewBarCode(BCode head);
void ShowBarCode(BCode head);
BCode DeleteBarCode(BCode head);
void SaveBarCodesInFile(BCode headBC, FILE* outputBarCode);
CCard ReadCreditCardsFromFile(CCard headCC);
CCard AddNewCreditCard(CCard head);
void ShowCreditCard(CCard head);
CCard DeleteCreditCard(CCard head);
void SaveCreditCardInFile(CCard headCC, FILE* outputCreditCard);

#endif