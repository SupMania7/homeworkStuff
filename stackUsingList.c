#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node *link;
     
    };
    struct node *head=NULL;
void traversal(int n)
    { if(head!=NULL)
        {struct node *ptr;
        ptr=head;
        printf("The list is:\t");
        while(ptr!=NULL)
        {   printf(" %d ",ptr->data);
            ptr=ptr->link;
        }
    }
    else
     printf("\nStack Underflow!\n");
    
    }
void push(int n)
{   int item;
    struct  node *newNode;
    
    printf("Enter item:\t");
    scanf("%d",&item);
    
    newNode=malloc(sizeof(struct node));
    
    newNode->link=NULL;
    newNode->data=item;
    
    if(head==NULL)
       {printf("Debug!");
        head=newNode;
        
       }
    else
    {struct  node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=newNode;
    }
}
void pop(int n)
{   if(head!=NULL)
    {struct node *ptr,*prev;
    ptr=head;
    while(ptr->link!=NULL)
    {   prev=ptr;
        ptr=ptr->link;
    }
        free(ptr);
        prev->link=NULL;
    }
    else
    printf("\nStack Underflow!\n");
    
}
int main()
{
    int c,n,trigg=1;
    printf("Enter size of stack:\t");
    
    scanf("%d",&n);
    
    while(trigg)
    {   printf("Enter[1-4]\n1.push\n2.pop\n3.display\n4.exit:\n");
        fflush(stdin); 
        scanf("%d",&c);

        switch (c)
        {
        case 1:
            push(n);
            break;
        case 2:
            pop(n);
            break;
        case 3:
            traversal(n);
            break;
        case 4:
        trigg=0;
        break;
        
        default:
        printf("\n Thats not a valid response!\n");
            break;
        }
    }
}
