#include<stdio.h>
#include<stdlib.h>
struct Node{

	int data;
        struct Node *next;

}*first=NULL;

void  create(int a[],int n)
{
int i;
struct Node *temp,*last;
first = (struct Node*)malloc(sizeof(struct Node));
first->data = a[0];
first->next = NULL;
last=first;

for(i=1;i<n;i++)
{
 temp=(struct Node *)malloc(sizeof(struct Node));
 temp->data=a[i];
 temp->next=NULL;
 last->next=temp;//here last is first
 last=temp;//last is moved 
}

}

void Display(struct Node *p)
{

	while(p!=NULL)
	{
	 printf("%d \n",p->data);
	 p=p->next;
	}
}
void RDisplay(struct Node *p)//recurcive 
{
  if(p!=NULL)
  {
    RDisplay(p->next);
    printf("%d\n",p->data);//display while return
  }

}

int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	Display(first);
	RDisplay(first);

return 0;
}
