#include<stdio.h>
#include"PA2.h"

struct node * init(){
        struct node *sentinel=get_node();
	sentinel->data=42;
	sentinel->next=NULL;
	return sentinel;
}

