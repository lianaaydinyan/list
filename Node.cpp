#include "Node.hpp"

template <typename list>
list nodik<list>::get_data()
{
	return data;
}

template <typename list>
nodik<list>* nodik<list>::get_node()
{
	return next;
}

template <typename list>
void nodik<list>::set_data(list d_)
{
	data = d_;
}

template <typename list>
void nodik<list>::set_node(nodik<list>* n_)
{
	next = n_;
}

template <typename list>
nodik<list>::nodik() {}

template <typename list>
nodik<list>::~nodik() {}

template <typename list>
nodik<list>::nodik(const nodik<list>* obj)
{
	data = obj->data;
	next = obj->next;
}

template <typename list>
nodik<list>& nodik<list>::operator=(const nodik<list>* obj)
{
	if (this != obj)
	{
		data = obj->data;
		next = obj->next;
	}
	return *this;
}