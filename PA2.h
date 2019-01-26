#include<string.h>
#define MYNULL -1

struct node {
	int data;
	int next;
	int valid;
};

//typedef struct node Node;

void init(struct node *);
int add(struct node *, int);
void print(struct node *);
int delete(struct node *, int);
int search(struct node *, int);
void showOptions(void);
int get_node(struct node *);
void release_node(struct node *, int);

