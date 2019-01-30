#include<stdio.h>
#include"PA2.h"

int freeMem(struct node *ll){
	struct node *temp;
	while(ll != NULL){//While not the end of the list
		temp=ll->next;//Temp holds next location before freeing
		release_node(ll);//Free the memmory 
		ll=temp;//Jump to next node to be freed
	}
	return 0;
}
