/* Automatically add, delete, insert, print and count nodes of linked list */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct xyz {
  int a;
  struct xyz *p;
};

typedef struct xyz node;

int main() {
  void add(node **);
  void del(node **);
  void ins(node **);
  void print(node *);
  int count(node *);

  int ch;
  node *list = NULL;

  do {
    clrscr();
    printf("\n\nOption Menu\n\n");
    printf("1. Add Node\n");
    printf("2. Delete Node\n");
    printf("3. Insert Node\n");
    printf("4. Print Node\n");
    printf("5. Count Node\n");
    printf("6. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
      case 1:
	add(&list);
	break;
      case 2:
	del(&list);
	break;
      case 3:
	ins(&list);
	break;
      case 4:
	print(list);
	break;
      case 5:
	printf("\n\nTotal Node: %d\n", count(list));
	getch();
	break;
      case 6:
	break;
      default:
	printf("\nPlease enter number between 1 to 6 only.\n");
	getch();
	break;
    }
  }while(ch != 6);

  return 0;
}

void add(node **l) {
  node *t;
  t = *l;
  if(*l == NULL) {
    *l = (node *) malloc(sizeof(node));
    t = *l;
  }
  else {
    while(t->p != NULL)
      t = t->p;

    t->p = (node *) malloc(sizeof(node));
    t = t->p;
  }
  printf("\nEnter no: ");
  scanf("%d", &t->a);
  t->p = NULL;
  printf("\n\nNode Added...\n");
  getch();
}

void del(node **l) {
  int n;
  node *t, *x;
  t = *l;
  x = NULL;

  printf("\nEnter delete no: ");
  scanf("%d", &n);

  while(t->p != NULL) {
    if(t->a == n) {
      if(x == NULL) {
	*l = t->p;
	free(t);
	printf("\n\nFirst Number deleted.\n");
	getch();
	return;
      }
      else {
	x->p = t->p;
	free(t);
	printf("\n\nNumber deleted.\n");
	getch();
	return;
      }
    }
    x = t;
    t = t->p;
  }
  if(t->a == n) {
    x->p = t->p;
    free(t);
    printf("\n\nNumber deleted.\n");
  }
  else {
    printf("\n\nDelete no not found.\n");
  }
  getch();
}

void ins(node **l) {
  int n, ano;
  node *t, *x;
  t = *l;
  x = NULL;

  printf("\nAfter which no: ");
  scanf("%d", &ano);

  printf("\nEnter no: ");
  scanf("%d", &n);

  while(t->p != NULL) {
    if(t->a == ano) {
      x = (node *) malloc(sizeof(node));
      x->a = n;
      x->p = t->p;
      t->p = x;
      printf("\n\nNode inserted.\n");
      getch();
      return;
    }
    t = t->p;
  }
  if(t->a == ano) {
    x = (node *) malloc(sizeof(node));
    x->a = n;
    x->p = t->p;
    t->p = x;
    printf("\n\nNode inserted.\n");
    getch();
  }
  else {
    x = (node *) malloc(sizeof(node));
    x->a = n;
    x->p = t->p;
    t->p = x;
    printf("\n\nNo not found.\nNew Node inserted.\n");
    getch();
  }
}

int count(node *l) {
  int c=0;

  while(l != NULL) {
    c++;
    l = l->p;
  }
  return c;
}

void print(node *l) {

  clrscr();
  printf("\n\nCurrent List\n\n");
  while(l != NULL) {
    printf("%d\n", l->a);
    l = l->p;
  }
  getch();
}

