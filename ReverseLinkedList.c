#include <stdlib.h>
#include <stdio.h>

struct element
{
	int data;
	struct element* next;
};

typedef struct element el;
typedef el* LinkedList;

void push(LinkedList* l, int data)
{
	LinkedList n = malloc(sizeof(el));
	n->data = data;
	n->next = NULL;

	while (*l)
	{
		l = &(*l)->next;
	}

	*l = n;

}

void removeFirst(LinkedList* l)
{
	LinkedList n;
	if (*l)
	{
		n = *l;
		*l = (*l)->next;

		free(n);
	}
}

void print(LinkedList l)
{
	LinkedList tmp = l;

	while (tmp)
	{
		printf("%d->", tmp->data);
		tmp = tmp->next;
	}

	printf("[]\n");
}

void reverse(LinkedList* l)
{
	LinkedList prev, current, next;
	current = next = *l;
	prev = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*l = prev;
}

int main()
{
	LinkedList l = NULL;

	push(&l, 1);
	push(&l, 2);
	push(&l, 3);

	print(l);
	reverse(&l);
	print(l);

	return EXIT_SUCCESS;
}
