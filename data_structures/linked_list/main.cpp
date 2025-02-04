#include "header.h"

int main(){

    //acess_node_WO_pointer();

    //acess_node_W_pointer();

    LinkedLisit List;

    List.display();

    cout<<"Inserting 4 at position 2 beginning."<<endl;
    List.insert_at_position(2, 4);

    cout<<"Inserting 5 at beginning."<<endl;
    List.insert_at_beginning(5);

    cout<<"Inserting 6 at beginning."<<endl;
    List.insert_at_beginning(6);

    cout<<"Inserting 7 at end."<<endl;
    List.insert_at_end(7);

    cout<<"Inserting 4 at position 2."<<endl;
    List.insert_at_position(2, 4);

    cout<<"Inserting 5 at position 6."<<endl;
    List.insert_at_position(6, 5);
    List.display();

    cout<<"Deleting node at position 2."<<endl;
    List.delete_node(2);
    List.display();

    cout<<"Deleting node at position 5."<<endl;
    List.delete_node(5);
    List.display();

    return 0;
}
