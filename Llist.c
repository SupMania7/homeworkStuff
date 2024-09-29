#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node *link;
     
    };
    struct node *head=NULL;
   
    int createList()
    {   
        if(head==NULL) 
        {
        
        int n,item;
        struct node *newNode,*temp;
        
        printf("Enter no. of elements in the list:\t");
        scanf("%d",&n);
        if(n!=0)
        {
        printf("Enter element:\t");
        scanf("%d",&item);
        newNode=malloc(sizeof(struct node));
        newNode->link=NULL;
        head=newNode;
        temp=head;
        head->data=item;
        for (int i=2;i<=n;i++)
        {   newNode=malloc(sizeof(struct node));
            newNode->link=NULL;
            temp->link=newNode;
            printf("Enter element:\t");
            scanf("%d",&item);
            newNode->data=item;
            temp=temp->link;
            
           
        }
        }
         return n; 
        }

      else{
        printf("List is already created");
      }

    }
    
    void traversal(int n)
    {
        struct node *ptr;
        ptr=head;
        printf("The list is:\t");
        for (int i=1;i<=n;i++)
        {   printf(" %d ",ptr->data);  
            ptr=ptr->link;
        }
    }
    int insertNodeAtHead(int n)
    {   if(head!=NULL)
    {   int item;
        struct node *newNode,*temp;
        newNode=malloc(sizeof(struct node));
        newNode->link=NULL;
        temp=head;
        printf("\nEnter data to insert:\t");
        scanf("%d",&item);
        newNode->data=item;
        head=newNode;
        head->link=temp;
        return n+1;
    }
  
    }
    
    int insertNodeAtPos(int n)
    {   if(head!=NULL)
    {
        int item;
        int pos,i=1;
        printf("\nEnter Position:\t");
        scanf("%d",&pos);
        struct node *newNode,*temp;
        newNode=malloc(sizeof(struct node));
        newNode->link=NULL;
        temp=head;
        printf("\nEnter data to insert:\t");
        scanf("%d",&item);
        newNode->data=item;
        while(i<pos-1)
        {
                temp=temp->link;
                i++;
        }
        newNode->link=temp->link;
        temp->link=newNode;
        
        return n+1;

    }
    }

     int main()
    {
        int n=createList();
        traversal(n);
        n=insertNodeAtHead(n);
        traversal(n);
        n=insertNodeAtPos(n);
        traversal(n);
    }
    

    