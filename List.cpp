#include "List.hpp"

template <typename list>
My_list<list>::~My_list() 
{
	while (head != nullptr)
	{
		nodik<list>* temp = head;
		head = head->next;
		delete temp;
	}
}


template <typename list>
void My_list<list>::buble_sort(nodik<list>* node)
{
	bool		swap = true;
	nodik<list>* l_tmp = nullptr;
	while (swap)
	{
		swap = false;
		nodik<list>* tmp = node;
		while (tmp->next != l_tmp)
		{
			if (tmp->data > tmp->next->data)
			{
				list t_ = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = t_;
				swap = true;
			}
			tmp = tmp->next;
		}
		l_tmp = tmp;
	}
}




template <typename list>
void My_list<list>::insert(nodik<list>* node)
{
	if (head == nullptr)
	{
		head = node;
	}
	else
	{
		nodik<list>* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = node;
	}
}

template <typename list>
void My_list<list>::print_data(nodik<list>* node)
{
	std::cout << node->data << std::endl;
}

template <typename list>
void My_list<list>::add_node(nodik<list>* node)
{
	insert(node);
}

template <typename list>
list My_list<list>::pop_front()
{
	if (head == nullptr)
	{
		std::cout << " There is no element to pop " << std::endl;
	}
	list val = head->data;
	nodik<list>* tmp = head;
	head = tmp->next;
	delete tmp;
	return val;
}

template <typename list>
void My_list<list>::push_front(list val)
{
	nodik<list>* new_node = new nodik<list>(val, head);
	new_node->data = val;
	new_node->next = head;
	head = new_node;
}