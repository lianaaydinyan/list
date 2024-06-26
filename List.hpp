#ifndef LIST_H
#define LIST_H

#include "Node.hpp"

template <typename list>
class My_list
{
public:
	nodik<list>* head;
	My_list() : head(nullptr) {}
	~My_list();
	void print_data(nodik<list>* node);
	nodik<list>* get_node() { return head; }
	void set_node(nodik<list>* node) { head = node; }
	void insert(nodik<list>* node);
	void add_node(nodik<list>* node);
	void push_front(list val);
	void buble_sort(nodik<list>* node); // wO (n)^2 bO(n)
	void selection_sort(nodik<list>* node); // O(n)^2
	
	void merge_sort(nodik<list>* node);
	void quik_sort(nodik<list>* node); 
	// .. sertion get sorting
	// array-i merge n log n
	list pop_front();
};

template class My_list<int>;
#include "List.cpp"

#endif // LIST_H