#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

class node{
public:
    int data;
    node* next;
    ///constructor
    node(int value):data(value),next(NULL){}
};

void insertHead(node* &head, int data){
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void print(node* head){
    while(head!=NULL){
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


node* mergeLL(node* a, node* b){
    if( a == NULL ){
        return b;
    }
    else if( b == NULL ){
        return a;
    }

    node* c;

    if( a->data < b->data ){
        c = a;
        c->next = mergeLL(a->next, b);
    }
    else{
        c = b;
        c -> next = mergeLL(a, b -> next);
    }

    return c;
}

int32_t main(void){

    node* head = NULL;
    node* head2 = NULL;
    cin>>head>>head2;
    cout<<head<<endl<<head2;

    head = mergeLL(head, head2);

    cout<<head<<"\n";

    return 0;
}
