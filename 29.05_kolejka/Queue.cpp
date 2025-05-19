//
// Created by Student on 19.05.2025.
//

#include "Queue.h"

#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0};
int queue_index = 0;

int isQueueEmpty(void)
{
    return (queue_index ==0) ? 1 : 0;
}
int isQueueFull(void)
{
    return (queue_index ==0) ? 1 : 0;
}
int Pop(void);
{
    if(!isQueueEmpty())
        queue_index--;
}
int Top(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[queue_index - 1];
    }

    return queue_table[0];
}
void Push(int val)
{
    if (!isQueueFull())
    {
        queue_table[queue_index] = val;
        queue_index++;
    }
}