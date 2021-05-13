#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void testReadNumber(){
    int a = ReadNumber();
    assert(a == 2);
} 

void testReadBarcode(){
    int bcode= ReadBarCode();
    assert(bcode == 123456);
}

void testReadNumProduct(){
    int numProduct = ReadNumProduct();
    assert(numProduct == 20);
    numProduct = ReadNumProduct();
    assert(numProduct == -1);
}

void testReadNumOfCard(){
    int numOfCard = ReadNumOfCard();
    assert(numOfCard == 1234);
}

void testBarCodes(){
    BCode newBarCode = NULL;
    newBarCode = ReadBarCodesFromFile(newBarCode);
    BCode test = newBarCode;
    assert(test->key == 555555);
    test = test->next;
    assert(test->key == 222222);
    test = test->next;
    assert(test->price == 15);
    newBarCode = AddNewBarCode(newBarCode);
    test = NULL;
    test = AddNewBarCode(test);
    assert(test->key == 123456);
    assert(test->price == 13);
    assert(newBarCode->key == 123456);
    assert(newBarCode->price == 13);
    newBarCode = DeleteBarCode(newBarCode);
    newBarCode = DeleteBarCode(newBarCode);
    assert(newBarCode->key == 555555);
    test = DeleteBarCode(test);
    test = DeleteBarCode(test);
    test = DeleteBarCode(test);
}

void testCreditCards(){
    CCard newCreditCard = ReadCreditCardsFromFile(NULL);
    CCard test = newCreditCard;
    assert(test->numofcard == 2222);
    test = test->next;
    assert(test->numofcard == 1111);
    test = test->next;
    assert(test->sale == 7);
    newCreditCard = AddNewCreditCard(newCreditCard);
    newCreditCard = AddNewCreditCard(newCreditCard);
    test = NULL;
    test = DeleteCreditCard(test);
    assert(test == NULL);
    test = AddNewCreditCard(test);
    assert(newCreditCard->numofcard == 1121);
    assert(newCreditCard->sale == 11);
    assert(test->numofcard == 1121);
    assert(test->sale == 11);
    newCreditCard = DeleteCreditCard(newCreditCard);
    newCreditCard = DeleteCreditCard(newCreditCard);
    assert(newCreditCard->numofcard == 1121);
    newCreditCard = DeleteCreditCard(newCreditCard);
    assert(newCreditCard->numofcard == 2222);
}

void testPurchaseUsingCCard(){
    BCode newBarCode = NULL;
    newBarCode = ReadBarCodesFromFile(newBarCode);
    int sum = Purchase(newBarCode);
    assert(sum == 30);
    sum = Purchase(newBarCode);
    assert(sum == 0);
    CCard newCreditCard = ReadCreditCardsFromFile(NULL);
    sum = UseCreditCard(sum, newCreditCard);
    assert(sum == 0);
    sum = 30;
    sum = UseCreditCard(sum, newCreditCard);
    assert(sum == 29);
    sum = UseCreditCard(sum, newCreditCard);
    assert(sum == 29);
    sum = UseCreditCard(sum, newCreditCard); 
    assert(sum == 29);
}

void testSavingCCardInFile(){
    CCard headCC = AddNewCreditCard(NULL);
    FILE* outputCreditCard =fopen("savingcard.txt", "w");
    SaveCreditCardInFile(headCC, outputCreditCard);
    fclose(outputCreditCard);
    outputCreditCard =fopen("savingcard.txt", "r");
    int number;
    fscanf(outputCreditCard, "%d", &number);
    assert(number == 1);
    BCode bcode = ReadBarCodesFromFile(NULL);
    FILE* outputBCode = fopen("savingcard.txt", "w");
    SaveBarCodesInFile(bcode, outputBCode);
    fclose(outputBCode);
    outputBCode = fopen("savingcard.txt", "r");
    fscanf(outputBCode, "%d", &number);
    assert(number == 3);
}

int main() {
    testReadNumber();
    testReadBarcode();
    testReadNumProduct();
    testReadNumOfCard();
    testBarCodes();
    testCreditCards();
    testPurchaseUsingCCard();
    testSavingCCardInFile();
    return 0;
}