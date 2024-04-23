#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *first, *temp1, *temp;
    int i=1, j, n, pos, value, choice;
    first=(struct node*)malloc(sizeof(struct node));
    printf("Enter first node: ");
    scanf("%d", &first->data);
    first->next=NULL;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter data of all nodes: ");
    temp1= first;
    while(i<=n)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d", &temp->data);
        temp->next=NULL;
        temp1->next=temp;
        temp1=temp;
        i++;
    }
    printf("Enter 1 to traverse, 2 to add 3 to delete 4 to exit: ");
    scanf("%d", &choice);
    swtich(choice)
    {
        case 1:
        {
            temp=first;
            while(temp!=NULL)
            {
                printf("%d", temp->data);
                temp=temp->next;
            }
            break;
        }
        case 2:
        temp =first;
        printf("List before adding: ");
        while(temp!=NULL)
        {

        
        }
    }
}