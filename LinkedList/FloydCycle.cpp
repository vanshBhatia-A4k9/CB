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

bool Floydcycle(node* head){
    node* slow = head ;
    node* fast = head ;

    while( fast != NULL && fast -> next != NULL ){
        fast = fast -> next -> next ;
        slow = slow -> next ;

        if( fast == slow )
            return true ;
    }
    return false ;
}

int breakCycle(node* head){
    if( !(head) || !( Floydcycle(head) ) )
        return -1;
    else{

        node* fast = head;
        node* slow = head;

        while( fast != NULL && fast -> next != NULL ){
            fast = fast -> next -> next ;
            slow = slow -> next;

            if( fast == slow ){
                slow = head;
                break;
            }
        }

        int indexToBreak = 0;
        node* prev = fast;

        while( slow != fast ){
            indexToBreak++;
            prev = fast;
            fast = fast -> next;
            slow = slow -> next;
        }
        prev -> next = NULL;
        return indexToBreak;
    }
}

int32_t main(void){

    node* head = NULL;
    cin>>head;
    cout<<Floydcycle(head);

    return 0;
}
