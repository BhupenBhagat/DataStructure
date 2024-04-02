#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAThead(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

void insertATtail(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){     //IF LL is empty
        head=n;
        return;
    }
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"endl"<<endl;
}

Node* reverse(Node* head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

//Searching in Linked list
void search(Node* head,int key){
    Node* temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"The element is present at "<<pos<<" position of the Linked List.";
            return;
        }
        temp=temp->next;
        pos++;
    }
    cout<<"The element is not found the Linked List!!";
    return;
}

int main(){
    Node* head=NULL;
    insertATtail(head,1);
    insertAThead(head,2);
    //insertATtail(head,3);
    //insertATtail(head,4);
    //insertATtail(head,5);
    display(head);
    Node* newhead=reverse(head);
    display(newhead);
    //search(head,10);
    //search(head,1);
    return 0;
}