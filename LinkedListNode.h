#pragma once
class LinkedListNode
{
	double data;
	LinkedListNode* previous;
	LinkedListNode* next;

public:
	LinkedListNode(double data = 0.0);
	LinkedListNode(double data, LinkedListNode* previous, LinkedListNode* next);

	~LinkedListNode();

	double get_data();
	void set_data(double data);

	LinkedListNode* get_previous();
	void set_previous(LinkedListNode* previous);

	LinkedListNode* get_next();
	void set_next(LinkedListNode* next);
};

