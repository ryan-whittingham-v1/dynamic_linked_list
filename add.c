#include<stdio.h>
#include"PA1.h"

int add(struct node *ll, int nodeData){
	int newNode=get_node(ll);//Assign ll index to new node
	int nodeIndex=ll[0].next;//Set node index to first node
	if(newNode != MYNULL){//If space available in the list 
		ll[newNode].data=nodeData;//Assign user number to node
		
		if(nodeIndex == MYNULL){ //If list is empty
			ll[0].next = newNode;//New node becomes first in the list
			ll[newNode].next = MYNULL;//New node now points to end of list
			return 1;//Success
		}
		else{//List already contains data
			int prevNode=0;
			while(ll[newNode].data>ll[nodeIndex].data){//While new data is larger than existing data in list
				prevNode=nodeIndex;//Previous node holds previous index value
				nodeIndex=ll[nodeIndex].next;//Set node index to next node
				if(nodeIndex == MYNULL){//If next index points to end of list, new node data is largest in the list
					ll[newNode].next = MYNULL;//Set new node to point to end of list
					ll[prevNode].next=newNode;//Set previous node to point to new node
					return 1;//Success
				}
			}
			if(ll[newNode].data==ll[nodeIndex].data){//If data already in list
				return 0;//Fail
			}
			else{
				ll[newNode].next=nodeIndex;//new node points to index that failed while loop
				ll[prevNode].next=newNode;//previous node that satisfied while loop points to new node
				return 1;//Success
			}
		}
	}
	return 0;//Not enough space in list
}
