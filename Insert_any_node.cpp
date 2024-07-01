#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
      this->val=val;
      this->next=NULL;
    }
};
void insert_tail(Node *&head,int val)
{
    Node * newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        cout<<"The value has add on the link List !"<<endl<<endl;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout<<"The value has add on the link List !"<<endl<<endl;
}
void anywhere(Node *head,int pos,int val)
{
     Node * newNode= new Node(val);
     Node *temp=head;
     for(int i=1;i<pos-1;i++)
     {
        temp=temp->next;
     }
     newNode->next=temp->next;
     temp->next=newNode;
}
void print(Node *head)
{
    Node * temp=head;
    cout<<"Here is the Link List : ";
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node * head=NULL;
    while(true){
        cout<<"Option 1 >> Insert Value At the Tail "<<endl;
        cout<<"Option 2 >> Print The Link List "<<endl;
        cout<<"Option 3 >> Insert Value At Any point "<<endl;
        cout<<"Option 4 >> Exit the program "<<endl;
        cout<<"Enter your Option"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
          int val;
          cout<<"Enter the value you want to add >> ";
          cin>>val;
          cout<<endl;
          insert_tail(head,val);
        }
        else if(op==2)
        {
            print(head);
            cout<<endl;
        }
        else if(op==3)
        {
            cout<<"Enter the position you want to add in the link list : "<<endl;
            int pos,val;
            cin>>pos;
            cout<<"Enter the value you want add in Here !!!!"<<endl;
            cin>>val;
            anywhere(head,pos,val);
            cout<<endl;
        }
        else if(op==4)
        {
            cout<<"...........End of the Program .........."<<endl;
            break;
        }
        
    }
 
   return 0;
}