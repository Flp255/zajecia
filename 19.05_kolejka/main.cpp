#include <stdio.h>
#include "Queue.h" // Ważne, żeby to było

void menu(void)
{
    printf("\n");
    printf("1 - dodaj liczbe do kolejki (Enqueue)\n");
    printf("2 - odczytaj wartosc z poczatku kolejki (Peek)\n");
    printf("3 - zdejmij liczbe z kolejki (Dequeue)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main() {
    int temp = 0;
    int option = 0;
    printf("Implementacja kolejki\n"); // Poprawiona literówka i dodany znak nowej linii

    while (1) {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (!isQueueFull()) {
                    printf("Podaj wartosc: "); // Zmieniono na bardziej precyzyjny komunikat
                    scanf("%d", &temp);
                    Enqueue(temp);
                } else {
                    printf("operacja niedozwolona KOLEJKA pelna!!!\n\n");
                }
                break;
            case 2:
                if (!isQueueEmpty()) {
                    temp = Peek();
                    printf("Odczytana wartosc: %d\n", temp); // Dodano \n
                } else {
                    printf("operacja niedozwolona KOLEJKA pusta!!!\n\n"); // Poprawka
                }
                break;
            case 3:
                if (!isQueueEmpty()) {
                    temp = Dequeue();
                    printf("Usunieta wartosc: %d\n", temp); // Zmiana komunikatu i dodano \n
                } else {
                    printf("operacja niedozwolona KOLEJKA pusta!!!\n\n"); // Poprawka
                }
                break;
            case 4:
                if (isQueueEmpty()) { // Poprawiona logika
                    printf("KOLEJKA jest pusta.\n");
                } else {
                    printf("KOLEJKA nie jest pusta.\n");
                }
                break;
            case 5:
                if (isQueueFull()) {
                    printf("KOLEJKA jest pelna.\n");
                } else {
                    printf("KOLEJKA nie jest pelna.\n");
                }
                break;
            case 6:
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }
    return 0; // Powinien być unreachable, ale dobra praktyka
}