#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node * init(void);
int add(struct node *, int);
void print(struct node *);
int delete(struct node *, int);
int search(struct node *, int);
void showOptions(void);
struct node * get_node(void);
void release_node(struct node *);
int freeMem(struct node *);

