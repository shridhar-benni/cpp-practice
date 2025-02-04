#ifndef LL_HEADER
#define LL_HEADER
#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

int acess_node_WO_pointer();

int acess_node_W_pointer();

class LinkedLisit{
    node* Head;

public:
    LinkedLisit(){Head = nullptr;}

    int is_empty(); //Returns 1 if linked list is empty
    int display();
    int insert_at_beginning(int);
    int insert_at_end(int);
    int insert_at_position(int, int);
    int delete_node(int);

    ~LinkedLisit();
};

#endif // LL_HEADER
