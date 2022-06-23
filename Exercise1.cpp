#include <stdio.h>
#include <stdlib.h>
#define N 10

int stack_arr[N];
int top = -1;

void push(int item);
int pop();
int isEmpty();
int isFull();
void display();

int main(){
	
	char ch;
	int item;
	while(1){ 

		printf("\nPress U to push an item\n");
		printf("Press O to pop an item\n");
		printf("Press E to exit and display the stack\n");
		scanf(" %s",&ch);
		switch(ch){
			case 'U':
				printf("\nEnter the item to be pushed: ");
				scanf(" %d",&item);
				push(item);
				break;
			case 'O':
				item = pop();
				printf("\nPopped item is: %d\n", item);
				break;
			case 'E':
				display();
				exit(1);
			default:
				printf("\nEnter a valid character\n");
		};	
	}
	return 0;
}

void push(int item){
	if(isFull()){
		printf("\nStack Overflown\n");
		return;
	}
	top = top+1;
	stack_arr[top] = item;
}

int pop(){
	int item;
	if(isEmpty()){
		printf("\nStack Underflown\n");
		exit(1);
	}
	item = stack_arr[top];
	top = top-1;
	return item;		
}

void display(){
	int i;
	if(isEmpty()){
		printf("Stack is empty\n");	
		return;
	}
	printf("Stack elements:\n");
	for(i=top;i>=0;i--)
		printf(" %d\n",stack_arr[i]);
}

int isEmpty(){
	if(top == -1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(top == N-1)
		return 1;
	else
		return 0;
}



