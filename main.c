#include<stdio.h>
#include"PA2.h"

/* 
Ryan Whittingham
CSE 222
January 25, 2019
Programming Assignment 2

-----------------------------------------------
PA2 is a C program that allows the user to interface 
with a dynamically allocated linked list to store, 
sort, delete, search and print data in the list 
through simple commands. 
-----------------------------------------------
*/

int main(void){
	char buffer[100];
	char userLetter[100];
	int userNum;
	int ret;
	struct node *list;
	
	list=init();//Creates sentinel node that points to NULL
	
	while(1 == 1){//Will run forever
		printf(">");//Display prompt for user input
		fgets(buffer, 100, stdin);//Capture user input
		int ret=sscanf(buffer, "%s" "%9d", userLetter, &userNum);//Inspect and catalog user input
		if(ret==2){//If two valid arguments given
			if (strcmp(userLetter, "i") == 0){//User wants to insert number to the list
				ret=add(list, userNum);
				if(ret==1){
					printf("SUCCESS\n\n");
				}
				else{
					printf("NODE ALREADY IN LIST\n\n");
				}
			} 
			else if (strcmp(userLetter, "s") == 0){//User wants to search the list for number
				ret=search(list, userNum);
				if(ret==1){
					printf("FOUND\n\n");
				}
				else{
					printf("NOT FOUND\n\n");
				}
			} 
			else if (strcmp(userLetter, "d") == 0){//User wants to delete number from the list
				ret=delete(list, userNum);
				if(ret==1){
					printf("SUCCESS\n\n");
				}
				else{
					printf("NODE NOT FOUND\n\n");
				}
			}
			else{//Invalid input
				showOptions();//Remind user of valid input options
			}
		}
		else if(ret==1){//If 1 argument given
			if(strcmp(userLetter,"x")==0){//User wants to exit
				return(freeMem(list));//Free memmory of entire list then exit
			}
			else if (strcmp(userLetter,"p")==0){//User wants to print
				print(list);
			}
			else{//Invalid input
				showOptions();//Remind user of valid input options
			}
		}
		else{//Invalid input
			showOptions();
		} 
	}
	return 0;
}
