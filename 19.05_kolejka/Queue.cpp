//
// Created by Student on 19.05.2025. // Popraw datę na aktualną
//

#include "Queue.h" // Ważne, żeby to było

#define QUEUE_SIZE 5 // Definicja rozmiaru dla tej konkretnej implementacji

// Zmienne statyczne, ich zakres jest ograniczony tylko do tego pliku .c
static int queue_table[QUEUE_SIZE];
static int front = -1;
static int rear = -1;

int isQueueEmpty(void)
{
    return (front == -1) ? 1 : 0;
}

int isQueueFull(void)
{
    // Warunek pełnej kolejki cyklicznej, zostawiając jedno wolne miejsce
    return ((rear + 1) % QUEUE_SIZE == front) ? 1 : 0;
}

void Enqueue(int val)
{
    if (!isQueueFull()) // Sprawdzamy CZY JEST MIEJSCE
    {
        if (front == -1) { // Jeśli kolejka była pusta, inicjalizujemy front
            front = 0;
        }
        rear = (rear + 1) % QUEUE_SIZE; // Przesuwamy rear z zawijaniem
        queue_table[rear] = val; // Dodajemy wartość
    }
    // Jeśli kolejka jest pełna, nic nie robimy, obsługa błędu jest w main.c
}

int Dequeue(void)
{
    if (!isQueueEmpty())
    {
        int val = queue_table[front]; // Pobieramy wartość
        if (front == rear) { // Jeśli to był ostatni element
            front = -1; // Resetujemy kolejkę do stanu pustej
            rear = -1;
        } else {
            front = (front + 1) % QUEUE_SIZE; // Przesuwamy front z zawijaniem
        }
        return val;
    }
    return -1; // Zwracamy -1 lub inny kod błędu, jeśli kolejka jest pusta
}

int Peek(void) // Poprawiony typ zwracany
{
    if (!isQueueEmpty())
    {
        return queue_table[front];
    }
    return -1; // Zwracamy -1 lub inny kod błędu, jeśli kolejka jest pusta
}