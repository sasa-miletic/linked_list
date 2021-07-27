#include "LinkedList.h"


LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}


LinkedList::~LinkedList()
{
	if (head == nullptr && tail == nullptr)
	{
		return;
	}
	else
	{
		LinkedListNode* temp = head;
		while (temp != nullptr)
		{
			temp = temp->get_next();
			delete head;
			head = temp;
		}
	}
	head = nullptr;
	tail = nullptr;
}


LinkedListNode* LinkedList::getHead()
{
	return head;
}


void LinkedList::add_node_to_the_front(double data)
{
	LinkedListNode* temp = new LinkedListNode(data, nullptr, tail);

	if (head == nullptr && tail == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		head->set_previous(temp);
		temp->set_next(head);
		head = temp;
	}
}


void LinkedList::add_node_to_the_back(double data)
{
	LinkedListNode* temp = new LinkedListNode(data, tail, nullptr);

	if (head == nullptr && tail == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->set_next(temp);
		temp->set_previous(tail);
		tail = temp;
	}
}


LinkedListNode* LinkedList::find_node(double data)
{
	LinkedListNode* temp = head;

	while (temp != nullptr)
	{
		if (temp->get_data() == data)
		{
			std::cout << "Found: " << data << std::endl;
			return temp;
		}
		temp = temp->get_next();
	}

	return nullptr;
}


void LinkedList::delete_node(double data)
{
	LinkedListNode* node_to_delete = find_node(data);

	if (node_to_delete == nullptr)
	{
		return;
	}

	if (node_to_delete->get_previous() != nullptr)
	{
		node_to_delete->get_previous()->set_next(node_to_delete->get_next());
	}

	if (node_to_delete->get_next() != nullptr)
	{
		node_to_delete->get_next()->set_previous(node_to_delete->get_previous());
	}

	if (node_to_delete == head)
	{
		head = node_to_delete->get_next();
	}

	if (node_to_delete == tail)
	{
		tail = node_to_delete->get_previous();
	}

	delete node_to_delete;
}


void LinkedList::print_list(LinkedListNode* current)
{
	if (current == nullptr)
	{
		return;
	}
	else
	{
		std::cout << current->get_data() << " ";
		print_list(current->get_next());
	}

	std::cout << std::endl;
}


void LinkedList::update_list(double data, double x)
{
	LinkedListNode* temp = head;

	while (temp != nullptr)
	{
		if (data == temp->get_data())
		{
			temp->set_data(x);
		}
		temp = temp->get_next();
	}
}


void LinkedList::insert_node(double data, double x)
{
	LinkedListNode* node_to_insert = new LinkedListNode(x);

	LinkedListNode* current = find_node(data);
	if (current == nullptr)
	{
		std::cout << "Node not found." << std::endl;
		return;
	}

	LinkedListNode* next_node = current->get_next();

	if (next_node->get_next() == nullptr)
	{
		return;
	}

	current->set_next(node_to_insert);
	node_to_insert->set_previous(current);
	node_to_insert->set_next(next_node);
	next_node->set_previous(node_to_insert);
}

