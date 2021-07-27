#pragma once
#include "LinkedListNode.h"
#include <iostream>

class LinkedList
{
	LinkedListNode* head;
	LinkedListNode* tail;

public:
	LinkedList();

	~LinkedList();

	LinkedListNode* getHead();
	void add_node_to_the_front(double data);
	void add_node_to_the_back(double data);
	LinkedListNode* find_node(double data);
	void delete_node(double data);
	void print_list(LinkedListNode* node);
	void update_list(double data, double x);
	void insert_node(double data, double x);
};

