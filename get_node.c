#include<stdio.h>
#include"PA1.h"

int get_node(struct node *ll){
	int i=0;
	while(i<100){ //Crawl through array
		if(ll[i].valid == 0){//If node available
			ll[i].valid = 1;//Set to unavailable
			return i;//return node index
		}
		i++;//Set i to next node
	}
	return MYNULL; //If no free nodes available
}

