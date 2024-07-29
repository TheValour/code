#include <stdio.h>

int queue[5],MAX=5,rear=-1,front=-1;

void enque(int val){
	if(front ==0 && rear==MAX-1)
		printf("FULL");
		
	else if((rear+1)%MAX==front)
		printf("FULL");
	
	else{
	    if (front == -1) 
	    	front = 0;
	    	
		rear=(rear+1)%MAX;
		queue[rear]= val;
	}
}

void deque(){
	if(front==-1  && rear==-1)
		printf("Empty");
		
	else if(front==rear){
		printf("Deque %d\n",queue[front]);
		front=rear=-1;
	}
	
	else{
		printf("Deque %d\n",queue[front]);
		front=(front+1)%MAX;
	}
}


void dip(){
	int i =front;
	
	
	for (i = front; i != rear; i = (i + 1) % MAX) {
		printf("%d ", queue[i]);
	}
    	printf("%d ", queue[i]);

}

int main(){
	enque(5);
	enque(4);
	enque(6);
	
	deque();
	enque(16);
	enque(18);
			
	dip();
}
