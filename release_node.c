#include<stdio.h>
#include"PA1.h"

void release_node(struct node *ll, int thisNodeIndex){
        ll[thisNodeIndex].valid=0;//Set node to available
}

