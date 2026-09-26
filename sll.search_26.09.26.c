#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *new;
struct node *temp;

int main() {
    int choice;
    int count=0;

    do {
        new = (struct node*)malloc(sizeof(struct node));

        printf("Enter element: ");
        scanf("%d", &new->data);

        new->next = NULL;

        if (head == NULL) {
            head = new;
            temp = new;
        }
        else {
            temp->next = new;
            temp = new;
        }

        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);


    printf("\nOriginal Linked List: ");

    temp = head;

    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }

    printf("NULL");
    int key;
int flag = 0;

printf("\nEnter the element to be searched: ");
scanf("%d", &key);

temp = head;

while(temp != NULL) {

    if(temp->data == key) {
        printf("Element found");
        flag = 1;
        break;
    }

    temp = temp->next;
}

if(flag == 0) {
    printf("Element not found");
}
        


        
    return 0;
}
