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
void deleteTail(node* &head);
int len(node* head);

void deleteMiddle(node* &head, int p){
    if( head == NULL )
        return;
    else if( p > len(head) )
        deleteTail(head);
    else{
        int i=0;
        node* temp = head;
        while( i<p-1 ){
            temp = temp->next;
            i++;
        }
        node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete(toDelete);
    }
}

void deleteHead(node* &head){
    if(head == NULL)
        return;
    node* temp = head;
    head = head->next;
    delete(temp);
    return;
}

int len(node* head){
    int ctr = 0;
    while(head != NULL){
        head = head->next;
        ctr++;
    }
    return ctr;
}

void deleteTail(node* &head){
    if(head == NULL)
        return;

    node* temp = head;

    while(temp->next->next != NULL)
        temp = temp->next;

    delete(temp->next);
    temp->next=NULL;
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

    deleteHead(head);
    cout<<"\n";
    print(head);

    deleteTail(head);
    cout<<"\n";
    print(head);

    deleteMiddle(head,1);
    cout<<"\n";
    print(head);


    return 0;
}
