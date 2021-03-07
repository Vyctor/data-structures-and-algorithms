#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
  int front, rear, size;
  int *array;
  unsigned capacity;
};

struct Queue *createQueue(unsigned capacity)
{
  struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
  queue->capacity = capacity;
  queue->front = queue->size = 0;
  queue->rear = capacity - 1;
  queue->array = (int *)malloc(sizeof(queue->capacity * sizeof(int)));
  return queue;
}

int isFull(struct Queue *queue)
{
  return queue->size == queue->capacity;
}

int isEmpty(struct Queue *queue)
{
  return queue->size == 0;
}

void push(struct Queue *queue, int element)
{
  if (isFull(queue))
  {
    return;
  }
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = element;
  queue->size = queue->size + 1;
  printf("%d pushed to queue\n", element);
}

int pop(struct Queue *queue)
{
  if (isEmpty(queue))
  {
    return INT_MIN;
  }
  int item = queue->array[queue->front];
  queue->front = (queue->front + 1) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}

int front(struct Queue *queue)
{
  if (isEmpty(queue))
  {
    return INT_MIN;
  }
  return queue->array[queue->front];
}

int rear(struct Queue *queue)
{
  if (isEmpty(queue))
  {
    return INT_MIN;
  }
  return queue->array[queue->rear];
}

void length(struct Queue *queue)
{
  printf("Elements on stack: %d\n", queue->front + 1);
}

int main()
{
  struct Queue *queue = createQueue(1000);

  push(queue, 10);
  push(queue, 20);
  push(queue, 30);
  push(queue, 40);

  printf("%d dequeued from queue\n\n", pop(queue));

  printf("Front item is %d\n", front(queue));
  printf("Rear item is %d\n", rear(queue));

  return 0;
}