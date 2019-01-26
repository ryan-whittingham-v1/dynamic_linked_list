#include<stdio.h>
#include"PA2.h"

int add(struct node *ll, int nodeData){
	struct node *newNode=get_node();//get new node
	int nodeIndex=ll->next;//Set node index to first node
	if(newNode != NULL){//If space available
		newNode->data=nodeData;//Assign user number to node
		
		if(nodeIndex == NULL){ //If list is empty
			ll->next = newNode;//New node becomes first in the list
			newNode->next = NULL;//New node now points to end of list
			return 1;//Success
		}
		else{//List already contains data
			struct node *prevNode=ll->next;
			while(newNode->data > prevNode->data){//While new data is larger than existing data in list
				prevNode=nodeIndex;//Previous node holds previous index value
				nodeIndex=nodeIndex->next;//Set node index to next node
				if(nodeIndex == NULL){//If next index points to end of list, new node data is largest in the list
					newNode->next = NULL;//Set new node to point to end of list
					prevNode->next=newNode;//Set previous node to point to new node
					return 1;//Success
				}
			}
			if(newNode->data==nodeIndex->data){//If data already in list
				return 0;//Fail
			}
			else{
				newNode->next=nodeIndex;//new node points to index that failed while loop
				prevNode->next=newNode;//previous node that satisfied while loop points to new node
				return 1;//Success
			}
		}
	}
	return 0;//Not enough space in list
}
