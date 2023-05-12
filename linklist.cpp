#include<iostream>
using namespace std;


class node
{
	public:
		int data;
        node* next;
		
		node(int value)
		{
		data=value;
		next=NULL;	
		}

};

void insertattail(node* &head,int value)
{
node *n=new node(value);

if(head==NULL)
{
	head=n;

}


node *temp=head;
while(temp->next!=NULL)
{
	temp=temp->next;
	}	
	temp->next=n;
	
	
	
}


void disply(node* head)
{
	
node* temp=head;
while(temp!=NULL)
{
	cout<<temp->data<<"->";
	temp=temp->next;
	
	}	
	cout<<"NULL";
	
}


int main()
{
	node*head=NULL;
	insertattail(head,8);
	insertattail(head,3);
	insertattail(head,1);
	insertattail(head,9);
	disply(head);
	
	return 0;
	
}

