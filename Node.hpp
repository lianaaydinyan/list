#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename list>
class nodik
{
public:
	list data;
	nodik* next;
	nodik(list d_, nodik* n_) : data(d_), next(n_) {}
	list get_data();
	nodik* get_node();
	void set_data(list d_);
	void set_node(nodik* n_);
	nodik();
	~nodik();
	nodik(const nodik* obj);
	nodik& operator=(const nodik* obj);
};

#include "Node.cpp"
template class nodik<int>;

#endif