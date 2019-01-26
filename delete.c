#include<stdio.h>
#include"PA2.h"

int delete(struct node *ll, int nodeData){
	struct node *nodeIndex=ll->next;
	struct node *prevNode=ll;
	while(nodeIndex!=NULL){//While not the end of the list
		if(nodeIndex->data==nodeData){//Data is in the list
			prevNode->next=nodeIndex->next;//Set previous node to point to where deleted node was
			release_node(nodeIndex);//Free memmory
			return 1;	
		}
		prevNode=nodeIndex;//Move to next node for previous node
		nodeIndex=nodeIndex->next;//Move to next node for checking in if statement
	}
	return 0;//Data is not in the list
}	
