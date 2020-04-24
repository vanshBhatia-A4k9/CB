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

void insertHead(node* &head, int value);

void print(node *head){
    while (head != NULL){
        cout<<head->data<<"-> ";
        head = head->next;
    }
}

void insertHead(node* &head, int value){
    node* temp = new node(value);
    temp->next = head;
    head = temp;
}

int32_t main(void){
    node* head = NULL;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 30);

    print(head);

    return 0;
}
