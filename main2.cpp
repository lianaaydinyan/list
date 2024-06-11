#include <iostream>

void	print(int* arrr, const int sizee)
{
	for ( int i = 0; i < sizee ; i++)
	{
		std::cout << arrr[i] << ", " ; 
	}
	std::cout << std::endl;
}

void	bubble_sort(int* ar ,int sizee)
{
	int tmp;
	for (int i = 0; i < sizee ; i++)
	{
		for (int j = 1; j < sizee - 1; j++)
		{
			if (ar[i] > ar[j])
			{
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
		}
	}
}


void	insertion_sort(int* ar, int size)
{
	for (int j = 0; j < size; j++)
	{
		int min = j;
		for (int i = j + 1; i < size; i++)
		{
			if ( ar[min] > ar[i])
				min = i;
		}
		int tmp = ar[min];
		ar[min] = ar[j];
		ar[j] = tmp;
	}
}

void	merge_sort(int* ar, int size)
{

}

void	quick_sort(int* ar, int size)
{

}


void	insertion(int *ar, int size)
{
	int j;
	for (int i = 1; i < size - 1; ++i )
	{
		j = i;
		while (j-- >= 0 && ar[j - 1] > ar[i])
			std::swap(ar[j], ar[j - 1]);
	}
}



int main()
{
	const int size = 10;
	int arr[size] = {0, 1, 3, 5, 2, -5, 7, 9, 10, 2};
	print(arr,size);
	// std::cout << " After sorting with bubble sorting algorithm " << std::endl;
	// bubble_sort(arr,size);

	// std::cout << " After sorting with bubble insertion sort algorithm " << std::endl;
	// insertion_sort(arr,size);

	// std::cout << " After sorting with bubble insertion sort algorithm " << std::endl;
	// insertion_sort(arr,size);

	std::cout << " After sorting with bubble merge sort algorithm " << std::endl;
	merge_sort(arr,size);


	print(arr,size);

}