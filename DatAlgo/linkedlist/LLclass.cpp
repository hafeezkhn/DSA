#include<iostream>

class Node{
	public:
		int data;
		Node *next;
};

class LinkedList{
	private:
		Node *first;
	public:
		LinkedList(){first=NULL;}
		LinkedList(int A[],int n);
		~LinkedList()
		{
		 Node *p=first;
		 while(first)
		 {
		   first=first->next;
		   delete p;
		   p=first;
		 }
		}

		void Display();
		void Insert(int index,int x);
		int Delete(int index);
		int Length();
};




int main()
{
int A[]={1,2,3,4,5};
 LinkedList l(A,5);
 l.Insert(3,10);
 l.Display();
return 0;
}
