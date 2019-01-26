#include<stdio.h>
#include"PA2.h"

int search(struct node *ll, int userData){
	struct node *nodeIndex=ll->next;//Set node index to first node
	while(nodeIndex != NULL){//While not the end of the list
		if(nodeIndex->data == userData){//Check if user data matches current node data
			return 1;//Success
		}
		nodeIndex=nodeIndex->next;//Set index to next node
	}
	return 0;//Fail
}

