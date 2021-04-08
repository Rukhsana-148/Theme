#include<iostream>
using namespace std;
struct node{
    int data;
   node * next;
};
node* Head=NULL;
void creat(int value){
    node* nptr=new node;
    nptr->data=value;
    nptr->next=NULL;
    if(Head==NULL)
    {
        Head=nptr;
    }
    else{
       static node *tptr=Head;
        tptr->next=nptr;
        tptr=nptr;

    }

}
void addFirst(int value){
    node* nptr=new node;
    nptr->data=value;
    nptr->next=NULL;
    if(Head==NULL)
    {
        Head=nptr;
    }
    else{
        nptr->next=Head;
        Head=nptr;
    }
}
void removeFirst()
{
    if(Head==NULL)
    {
        cout<<"Linkled list is empty";
    }
    else{
        Head=Head->next;
    }
}
void removeLast(){
    if(Head==NULL)
    {
        cout<<"lLinkedlidt is empty";
    }

    else if(Head->next==NULL)
    {
        Head=NULL;
    }
    node* tptr=Head;
    cout<<"Removing the last element";
    while(tptr->next->next!=NULL)
    {
        tptr=tptr->next;
    }
    tptr->next=NULL;
}
void removePart(int value)
{
    if(Head==NULL)
    {
        cout<<"empty";
    }
    else if(Head->data==value){
        Head=Head->next;
    }
    else{
            cout<<"removing"<<value<<" ";
        node* tptr=Head;
        while(tptr->next->data!=value)
        {
            tptr=tptr->next;
        }
        if(tptr->next==NULL)
        {
            cout<<"Not Found";
        }
        else{
            tptr->next= tptr->next->next;
        }
    }
}
void print()
{
   cout<<"Current Linked List";
    node* tptr=Head;
    while(tptr!=NULL)
    {
        cout<<tptr->data;
        tptr=tptr->next;
    }
    cout<<"\n";
}
int main()
{
    creat(5);
    print();
     creat(4);
    print();
     creat(3);
    print();
    addFirst(3);
    print();
    addFirst(2);
    print();
    addFirst(1);
    print();
   removeFirst();
   print();
   removeLast();
   print();
   removePart(3);
   print();

}

