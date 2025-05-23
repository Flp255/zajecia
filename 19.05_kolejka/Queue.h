#ifndef QUEUE_H
#define QUEUE_H

// Nie definiuj tutaj QUEUE_SIZE, jeśli jest to stała prywatna dla Queue.c
// Jeśli QUEUE_SIZE ma być konfigurowalne z zewnątrz, zostaw je tutaj.
// W tym przypadku (zmienne statyczne w Queue.c) lepiej, żeby było tylko w Queue.c

// Deklaracje funkcji
int isQueueEmpty(void);
int isQueueFull(void);
void Enqueue(int val);
int Dequeue(void);
int Peek(void); // Poprawiony typ zwracany

#endif // QUEUE_H