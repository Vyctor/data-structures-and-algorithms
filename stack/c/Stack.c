#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
  int top;
  int *array;
  unsigned capacity;
};

struct Stack *createStack(unsigned capacity)
{
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  stack->capacity = capacity;
  stack->top = -1;
  stack->array = (int *)malloc(sizeof(stack->capacity * sizeof(int)));
  return stack;
}

int isFull(struct Stack *stack)
{
  return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack)
{
  return stack->top == -1;
}

void push(struct Stack *stack, int element)
{
  if (isFull(stack))
  {
    return;
  }
  stack->array[++stack->top] = element;
  printf("%d pushed to stack\n", element);
}

int pop(struct Stack *stack)
{
  if (isEmpty(stack))
    return INT_MIN;
  return stack->array[stack->top--];
}

int top(struct Stack *stack)
{
  if (isEmpty(stack))
  {
    return INT_MIN;
  }

  return stack->array[stack->top];
}

void length(struct Stack *stack)
{
  printf("Elements on stack: %d\n", stack->top + 1);
}

int main()
{
  struct Stack *stack = createStack(100);

  push(stack, 10);
  push(stack, 20);
  push(stack, 30);
  length(stack);

  printf("%d popped from stack\n", pop(stack));
}