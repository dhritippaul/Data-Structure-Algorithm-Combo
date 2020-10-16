#include <stdio.h>
#include <stdlib.h>

struct node{
	
	int data;
	struct node *prev;
	struct node *next;
} *first= NULL;

void display(struct node *p){
	
	while(p){
		
		printf("%d\t", p->data);
		p= p->next;
	}
}

void insert(struct node *p, int pos, int x){
	
	int i;
	struct node *t= (struct node*) malloc(sizeof(struct node));
	t->data= x;
	
	if(pos== 0){
	
		t->prev= NULL;
		t->next= first;
		if(first)
			first->prev= t;
		first= t;
	}
	else{
		
		for(i= 1; i<= pos-1; i++)
			p= p->next;
			
		t->next= p->next;
		t->prev= p;
		if(p->next)
			p->next->prev= t;
		p->next= t;
	}
}

int del(struct node *p, int pos){
	
	int x, i;
	
	if(pos== 1){
		
		first= first->next;
		if(first)
			first->prev= NULL;
			
		x= p->data;
		free(p);
	}
	else{
		
		for(i= 1; i<= pos-1; i++)
			p= p->next;
			
		p->prev->next= p->next;
		if(p->next)
			p->next->prev= p->prev;
			
		x= p->data;
		free(p);
	}
	
	return x;
}

void reverse(struct node *p){
	
	struct node *temp;
	while(p){
		
		temp= p->next;
		p->next= p->prev;
		p->prev= temp;
		
		p= p->prev;
		
		if(p!= NULL && p->next== NULL)
			first= p;
	}
}

int main(){
	
	int pos, x, t= 5;
	while(t){
		
		scanf("%d %d",&pos,&x);
		insert(first, pos, x);
		display(first);
		printf("\n\n");
		
		t--;
	}
	
	reverse(first);
	printf("\n");
	display(first);
	reverse(first);
	
	while(1){
		
		scanf("%d",&pos);
		x= del(first, pos);
		printf("%d is deleted\n", x);
		display(first);
		printf("\n\n");
	}
}
