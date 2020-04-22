#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
  int value;
  struct list *next;
} list;

int main()
{
  list *top = NULL;
  top = malloc(sizeof(list));
  if (top == NULL)
  {
    return 0;
  }
  int val, temp;
  scanf("%d", &val);
  list *clist = top;
  for (int i = 0; i < val; ++i)
  {
    scanf("%d", &temp);
    clist->value = temp;
    if (i != val - 1)
    {
      clist->next = malloc(sizeof(list));
      clist = clist->next;
    }
    else
    {
      clist->next = NULL;
    }
  }

  int position;
  struct list *list_pointer = top, *list_c = top;
  scanf("%d", &position);
  if (position != 0)
  {
    for (int i = 1; i < position && list_pointer != NULL; ++i)
    {
      list_pointer = list_pointer->next;
    }
    list_pointer->next = list_pointer->next->next;
  }

  else
  {
    list_c = list_pointer->next;
  }

  while (list_c != NULL)
  {
    printf("%d ", list_c->value);
    list_c = list_c->next;
  }
  return 0;
}