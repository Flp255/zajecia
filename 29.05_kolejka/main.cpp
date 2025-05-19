#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - poloz liczbe na kolejke (Push)\n");
    printf("2 - odczytaj wartosc z poczatku kolejki (Top)\n");
    printf("3 - zdejmij liczbe ze kolejki (Pop)\n");
    printf("4 - sprawdz czy kolejka jest pusty\n");
    printf("5 - sprawdz czy kolejka jest pelny\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

main()
{
    int temp=0;
    int option =0;
    printf("Imprelementacja kolejki");

    while(1)
    {
        menu();
        scanf("%d",&option);
    }
    switch (option)
    {
        case 1:
            if( !isQueueEmpty()){
                printf("Dodaj liczbe do kolejki");
                scanf("%d",&temp);
                Push(temp);
            }
            else {
                printf("operacja niedozwolona KOLEJKA pelny!!!\n\n");
            }
            break;
        case 2:
            if (!isQueueEmpty()) {
                temp = Top();
                printf("Odczytana wartosc: %d", temp);
            }
            else {
                printf("operacja niedozwolona STOS pusty!!!\n\n");
            }

            break;
        case 3:
            if (!isQueueEmpty()) {
                temp = Pop();
                printf("Odczytana wartosc: %d", temp);
            }
            else {
                printf("operacja niedozwolona STOS pusty!!!\n\n");
            }
            break;
        case 4:
            if( !isQueueEmpty()) {
                printf("KOLEJKa jest pusta.\n");
            }
            else{
                printf("KOLEJKA nie jest pusta.\n ");
            }
            break;
    case 5;
    if(isQueueFull()){
        printf("KOLEJKA jest pelna\n");
    }
    else{
        printf("KOLEJKA nie jest pelna\n")
    }
    break:
    case 6:
        return 0;

        default:
            printf("Wybierz wlasciwa opcje.\n\n");
            break;
    }
}