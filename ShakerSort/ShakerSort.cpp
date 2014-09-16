#include <iostream>
using namespace std;

//Print array values
void print_ar (int ar[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

//Shaker Sort
void shaker_sort (int ar[], int size)
{
	for ( int i = 1; i < size; ++i)
	{
		//Left to Right
		for (int j = i - 1; j < size - i; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				swap (ar[j], ar[j + 1]);
			}
		}

		//Right to Left
		for (int j = size - i - 1; j >= i; --j)
		{
			if (ar[j] < ar[j - 1])
			{
				swap (ar[j], ar[j - 1]);
			}
		}
	}
}

//Driver Function
int main()
{
	int ar [] = {1, 2, 78, 18, 16, 30, 29, 2, 0, 199};

	cout << "Array Initially : ";
	print_ar (ar, 10);

	shaker_sort (ar, 10);

	cout << "Sorted Array : ";
	print_ar (ar, 10);

	return 0;
}
