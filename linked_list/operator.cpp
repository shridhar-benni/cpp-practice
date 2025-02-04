#include "header.h"

int acess_node_WO_pointer(){

    node* NewNode;

    NewNode = new node;

    (*NewNode).data = 1;
    (*NewNode).next = nullptr;

    cout<<(*NewNode).data<<endl;
    cout<<(*NewNode).next<<endl;

    delete NewNode;

    return 0;
}

int acess_node_W_pointer(){

    node* NewNode;

    NewNode = new node;

    NewNode->data = 1;
    NewNode->next = nullptr;

    cout<<NewNode->data<<endl;
    cout<<NewNode->next<<endl;

    delete NewNode;

    return 0;
}

int LinkedLisit::is_empty(){
    if(!Head){
        return 1;
    }
    return 0;
}

int LinkedLisit::display(){

    cout<<endl;

    if(is_empty()){
        cout<<"Linked List is empty!"<<endl;
        return 0;
    }
    node* tmp;
    tmp = Head;

    while(tmp){
        cout<<"Address of current node: "<<tmp<<endl;
        cout<<"val: "<<tmp->data<<endl;
        cout<<"next: "<<tmp->next<<endl<<endl;
        tmp = tmp->next;
    }
    return 0;
}

int LinkedLisit::insert_at_beginning(int val){

    node* newNode;
    newNode = new(nothrow) node;

    if(!newNode){
        cout<<"Failed to allocate memory"<<endl;
        return 1;
    }

    newNode->data = val;
    newNode->next = Head;
    Head = newNode;

    return 0;
}

int LinkedLisit::insert_at_end(int val){

    node* newNode;
    newNode = new(nothrow) node;
    newNode->data = val;

    if(!newNode){
        cout<<"Failed to allocate memory"<<endl;
        return 1;
    }

    if(is_empty()){
        Head = newNode;
        return 0;
    }

    node* tmp;
    tmp = Head;

    while(tmp->next){
        tmp = tmp->next;
    }

    tmp->next = newNode;

    return 0;
}

int LinkedLisit::insert_at_position(int position, int val){

    if(is_empty()){
        cout<<"Linked List is empty!"<<endl;
        return 1;
    }

    node* newNode;
    newNode = new(nothrow) node;

    if(!newNode){
        cout<<"Failed to allocate memory."<<endl;
        return 1;
    }

    newNode->data = val;

    node* tmp;
    tmp = Head;

    for(int i=1; i<position-1; i++){
        if(!tmp->next){
            cout<<"Position is out of range."<<endl;
            return 1;
        }
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    return 0;

}

int LinkedLisit::delete_node(int position){

    if(is_empty()){
        cout<<"Linked List is empty!"<<endl;
        return 1;
    }
    node *tmp,*pre;

    tmp = Head;

    for(int i=1; i<position; i++){
        if(!tmp->next){
            cout<<"Position is out of range."<<endl;
            return 1;
        }
        pre = tmp;
        tmp = tmp->next;
    }

    pre->next = tmp->next;
    delete tmp;

    return 0;
}

LinkedLisit::~LinkedLisit(){
    node* tmp;

    while(Head){
        tmp = Head;
        Head = Head->next;
        cout<<"Deleting node with address: "<<tmp<<" with value: "<<tmp->data<<endl;
        delete tmp;
    }
    cout<<"Deleted all nodes in Linked List."<<endl;
}

