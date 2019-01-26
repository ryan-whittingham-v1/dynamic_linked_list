#include<stdio.h>
#include"PA1.h"

int delete(struct node *ll, int nodeData){
	int nodeIndex=ll[0].next;
	int prevNode=0;
	while(nodeIndex!=MYNULL){//While not the end of the list
		if(ll[nodeIndex].data==nodeData){//Data is in the list
			ll[prevNode].next=ll[nodeIndex].next;//Set previous node to point to where deleted node was
			release_node(ll, nodeIndex);//Sets valid to 0
			return 1;	
		}
		prevNode=nodeIndex;//Move to next node for previous node
		nodeIndex=ll[nodeIndex].next;//Move to next node for checking in if statement
	}
	return 0;//Data is not in the list
}	
