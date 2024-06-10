#include "List.hpp"

int main()
{
	My_list<int> my_list;
	nodik<int>* node1 = new nodik<int>;
	node1->data = 10;
	node1->next = nullptr;
	nodik<int>* node2 = new nodik<int>;
	node2->data = 20;
	node2->next = nullptr;
	nodik<int>* node3 = new nodik<int>;
	node3->data = 30;
	node3->next = nullptr;
	my_list.add_node(node1);
	my_list.add_node(node2);
	my_list.add_node(node3);
	nodik<int>* current = my_list.get_node();
	while (current != nullptr)
	{
		my_list.print_data(current);
		current = current->next;
	}
	std::cout << "Pop element-> " << my_list.pop_front() << std::endl;
	
	my_list.push_front(40);
	my_list.push_front(410);
	current = my_list.get_node();
	my_list.buble_sort(current);
	while (current != nullptr)
	{
		my_list.print_data(current);
		current = current->next;
	}

	return 0;
}