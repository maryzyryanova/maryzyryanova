#ifndef SUPERMARKET_H
#define SUPERMARKET_H

#include <stdio.h>
#include <stdlib.h>

typedef struct barcode barcode;
typedef barcode* BCode;

typedef struct barcode
{
        int key;
        char* name;
        int price;
        BCode next;
        BCode prev;
} barcode;

typedef struct creditcard creditcard;
typedef creditcard* CCard;

typedef struct creditcard
{
        int numofcard;
        int sale;
        CCard next;
        CCard prev;
} creditcard;

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