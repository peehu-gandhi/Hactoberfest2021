// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data) {
  // Allocate memory to a node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  // insert the item
  new_node->item = data;
  new_node->next = (*ref);

  // Move head to new node
  (*ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node* node, int data) {
  if (node == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = data;
  new_node->next = node->next;
  node->next = new_node;
}

void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void search(struct Node** ref,int key)
{
	struct Node* ptr = *ref;
	int i=0 , flag = 0;
	if(ptr==NULL)
	{
		printf("\nEmpty List");
	}
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->item==key)
			{
				printf("Item found at location %d.",i+1);
			    flag = 0;
			    break;
			}
			else
			{
				flag = 1;
			}
			i++;
			ptr = ptr->next;
		}
		if(flag==1)
		{
			printf("Item not found\n");
		}
	}
}


void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

// Print the linked list
void printList(struct Node* node) {
  while (node != NULL) {
    printf(" %d ", node->item);
    node = node->next;
  }
}

// Driver program
int main() {
  struct Node* head = NULL;
  int choice;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);
  
  printf("\nDo you want to search any data in the created node(1 for yes / 0 for no): ",choice);
  scanf("%d",&choice);
  if(choice==0)
  {
  	printf("You have successfully create a singly linked lists operation program");
  }
  else
  {
  	int key,result;
  	printf("Enter key to search in the list: ");
    scanf("%d", &key);
    search(&head,key);
   /* if (result)
    {
        printf("%d found in the list.\n", key);
    }
    else
    {
        printf("%d not found in the list.\n", key);
    }*/
   
  }
  return 0;
}

