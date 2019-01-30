#include<stdio.h>
#include"PA2.h"

int delete(struct node *ll, int nodeData){
	struct node *nodeIndex=ll->next;//Set nodeIndex to first node
	struct node *prevNode=ll;//Set preNode to sentinel
	while(nodeIndex!=NULL){//While not the end of the list
		if(nodeIndex->data==nodeData){//Data is in the list
			prevNode->next=nodeIndex->next;//Set previous node to point to where deleted node was
			release_node(nodeIndex);//Free memmory of deleted node
			return 1;	
		}
		prevNode=nodeIndex;//Update previous node for while loop
		nodeIndex=nodeIndex->next;//Update next node for while loop
	}
	return 0;//Data is not in the list
}	
