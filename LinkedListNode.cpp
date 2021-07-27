#include "LinkedListNode.h"

LinkedListNode::LinkedListNode(double data)
{
	this->data = data;
	previous = nullptr;
	next = nullptr;
}


LinkedListNode::LinkedListNode(double data, LinkedListNode* previous, LinkedListNode* next)
{
	this->data = data;
	this->previous = previous;
	this->next = next;
}


LinkedListNode::~LinkedListNode()
{
	previous = nullptr;
	next = nullptr;
}


double LinkedListNode::get_data()
{
	return data;
}

void LinkedListNode::set_data(double data)
{
	this->data = data;
}


LinkedListNode* LinkedListNode::get_previous()
{
	return previous;
}

void LinkedListNode::set_previous(LinkedListNode* previous)
{
	this->previous = previous;
}


LinkedListNode* LinkedListNode::get_next()
{
	return next;
}

void LinkedListNode::set_next(LinkedListNode* next)
{
	this->next = next;
}