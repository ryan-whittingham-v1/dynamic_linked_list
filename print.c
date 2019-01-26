#include<stdio.h>
#include"PA1.h"

void print(struct node *ll){
	int nodeIndex=ll[0].next;//Set nodeIndex to first node
	while(nodeIndex != MYNULL){//While not the end of the list
		printf("%d ", ll[nodeIndex].data);//Display data
		nodeIndex=ll[nodeIndex].next;//Move to next node in list
	}
	printf("\n\n");
}

