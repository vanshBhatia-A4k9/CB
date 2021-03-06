#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

unsigned int length = 0;

class node{
public:
    int data;
    node* next;
    ///constructor
    node(int value):data(value),next(NULL){}
};

void insertHead(node* &head, int data){
    length++;
    node* newNode = new node(data);
    if(head != NULL){
        newNode -> next = head;
        node* temp = head;
        while( temp->next != head ){
            temp = temp -> next;
        }
        temp -> next = newNode;
        head = newNode;
    }
    else{
        head = newNode;
        newNode -> next = newNode;
    }
}

void print(node* head){
    unsigned int i = 0;
    while( (i++) != length ){
        cout << head->data<<" -> ";
        head = head->next;
    }
}

void build(node* &head){
    int data ;   cin >> data ;
    while( data!= -1 ){
        insertHead(head, data) ;
        cin >> data ;
    }
}

istream& operator >> (istream &is, node* &head){
    build(head);
    return is;
}

ostream& operator << (ostream &os, node* &head){
    print(head);
    return os;
}

bool FloydCycle(node* head){
    if(head == NULL)
        return false;

    node* slow = head;
    node* fast = head;

    while( fast != NULL && fast->next != NULL ){
        fast = fast -> next -> next ;
        slow = slow -> next;

        if(fast == slow)
            return true;
    }

    return false;
}



int32_t main(void){

    node* head = NULL;
    cin>>head;
    cout<<head<<"\n";
//    cout<<"Enter number to delete: ";
//    int key;    cin>>key;
//    deleteNode(head, key);
//    cout<<"\n"<<head;

    return 0;
}
