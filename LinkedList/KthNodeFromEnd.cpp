#include<iostream>
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

void reverse(node* &head){
    node* current = head;
    node* previous = NULL;
    node* next;

    while(current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;
}

void fromEnd(node* head, int k){
    node* fast = head;
    node* slow = head;

    while( k -- > 0 ){
        fast = fast -> next;
    }

    while( fast!= NULL ){
        fast = fast -> next;
        slow = slow -> next;
    }

    cout << "Kth from end :: " << slow -> data;
}

int32_t main(void){
    node* head = NULL;
    cin>>head;
    cout<<head<<"\n";
    fromEnd(head,3);
    return 0;
}
