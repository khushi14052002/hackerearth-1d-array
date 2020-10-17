#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define SIZE 20

typedef struct node_tag {
    char * city;
    struct node_tag * next;
} node;

int main () {

 node * head=NULL;
 int i,n;
 char item[SIZE];

 void push(node **, char []);
 int pop (node **);

 scanf("%d",&n);
 for (i=0; i<n; i++) {
    scanf("%s",item);
    push(&head, item);
 }

 for (i=0; i<n; i++)
    printf("%d",pop(&head));

 return 0;
}

void push(node** head, char item[]) {
	int i,len=0;
	 node* Element = ( node*)malloc(sizeof(node));
	 for( i=0;item[i]!='\0';i++)
	     len++;
	     node* temp = ( node*)malloc(SIZE*sizeof(char));
    temp -> city = malloc(sizeof(char)*len+1); 
    Element -> next = *head;  
    (*head) = Element;  
}

int pop(node** head) {
if(*head != NULL){
      //  printf("Element popped: %c\n",(*head) -> city);
      struct node *tempPtr = *head;
      int len=0;
      len=strlen((*head)->city);
        //struct node *tempPtr = *head;
        *head = (*head) -> next;
        free(tempPtr);
        return len;
    }
    else{
        return;
    }
}

