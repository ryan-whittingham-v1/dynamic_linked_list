#include<stdio.h>
#include"PA2.h"

void release_node(struct node *ptr){
        free(ptr);
}

