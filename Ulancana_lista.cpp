#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList* linked_list = new LinkedList();

    linked_list->add_node_to_the_front(3);
    linked_list->add_node_to_the_front(5);
    linked_list->add_node_to_the_back(6);
    linked_list->add_node_to_the_front(7);
    linked_list->add_node_to_the_back(14);
    linked_list->add_node_to_the_back(74);
    linked_list->add_node_to_the_front(0.2);

    std::cout << "List contains: " << std::endl;
    linked_list->print_list(linked_list->getHead());
    
    linked_list->delete_node(3);
    linked_list->delete_node(7);
    linked_list->delete_node(6);

    linked_list->insert_node(14, 41);
    linked_list->insert_node(18, 41);

    linked_list->update_list(74, 77);

    std::cout << "After updating list contains: " << std::endl;
    linked_list->print_list(linked_list->getHead());

    delete linked_list;
    
    char c;
    std::cin >> c;
}

