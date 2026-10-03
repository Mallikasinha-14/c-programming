#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL, *new, *temp;
int choice;

int main(){

    do{
        new = (struct node *)malloc(sizeof(struct node));

        printf("Enter the element: ");
        scanf("%d", &new->data);

        new->next = NULL;

        if(head == NULL){
            head = new;
            temp = new;
        }
        else{
            temp->next = new;
            temp = new;
        }

        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    }while(choice == 1);


    printf("\nLinked List: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
