#include<stdio.h>
#include"PA2.h"

struct node * init(){
        struct node *sentinel=getNode();
	sentinel->data=42;
	sentinel->next=NULL;
	return sentinel;
}

