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

void findMid(node* head){
    if(head == NULL)
        return;
    node* fast = head->next;
    node* slow = head;

    while( fast != NULL && fast->next != NULL ){
        fast = fast -> next -> next;
        slow = slow->next;
    }

    cout << "Mid point :: "<<slow->data;
}

int32_t main(void){
    node* head = NULL;
    cin>>head;
    cout<<head<<"\n";
    findMid(head);
    return 0;
}
