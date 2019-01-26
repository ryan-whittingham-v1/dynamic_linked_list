#include<stdio.h>
#include"PA1.h"

int search(struct node *ll, int userData){
	int nodeIndex=ll[0].next;//Set node index to first node
	while(nodeIndex != MYNULL){//While not the end of the list
		if(ll[nodeIndex].data == userData){//Check if user data matches current node data
			return 1;//Success
		}
		nodeIndex=ll[nodeIndex].next;//Set index to next node
	}
	return 0;//Fail
}

