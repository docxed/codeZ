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

  struct list *new, *list_c = top, *list_pointer, *tmp = top;
  new = (struct list *)malloc(sizeof(list));
  int position;
  scanf("%d %d", &position, &new->value);

  if (position == 0)
  {
    new->next = top;
    list_c = new;
  }
  else
  {
    for (int count = 1; count < position && list_pointer != NULL; ++count)
    {
      tmp = tmp->next;
    }
    new->next = tmp->next;
    tmp->next = new;
  }

  while (list_c != NULL)
  {
    printf("%d ", list_c->value);
    list_c = list_c->next;
  }
  return 0;
}