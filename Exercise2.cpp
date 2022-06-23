#include <stdio.h>
#include <stdlib.h>
#define N 10

int queue_arr[N];
int rear = -1;
int front = -1;

void qinsert();
void qremove();
void display();

int main(){
	
	char ch;
	int item;
	while(1){ 

		printf("\nPress U to queue an item\n");
		printf("Press O to delete an item\n");
		printf("Press E to exit and display the queue\n");
		scanf(" %s",&ch);
		switch(ch){
			case 'U':
				qinsert();
				break;
			case 'O':
				qremove();
				printf("\nRemoved item is: %d\n", item);
				break;
			case 'E':
				display();
				exit(1);
			default:
				printf("\nEnter a valid character\n");
		};	
	}
}

void qinsert(){
	int item;
    if (rear == N - 1)
      printf("Queue Overflow \n");
    else{
     	if (front == - 1)
        front = 0;
        printf("Element to be inserted in the Queue: ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_arr[rear] = item;
      }
   }

void qremove(){
   if (front == - 1 || front > rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", queue_arr[front]);
        front = front + 1;
    }
}

void display(){
   if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue_arr[i]);
        printf("\n");
    }
}
