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

int len(node* head){
    int ctr = 0;
    while(head != NULL){
        head = head->next;
        ctr++;
    }
    return ctr;
}

void insertAtTail(node* &head, int data){
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node* newNode = new node(data);
    temp->next = newNode;
}

void insertAtMiddle(node* &head, int data, int p){
    if(head == NULL || p == 0){
        insertHead(head, data);
        return;
    }

    else if(p > len(head)){
        insertAtTail(head, data);
        return;
    }
    else{
        int i=0;
        node* temp = head;
        ///Take p-1 jumps
        while(i<p-1){
            temp = temp->next;
            i++;
        }

        node* newNode = new node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

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

    insertAtMiddle(head, 25, 6);
    insertAtMiddle(head, 15, 1);

    print(head);

    return 0;
}
