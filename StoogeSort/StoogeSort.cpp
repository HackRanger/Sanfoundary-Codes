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


void stooge_sort (int ar[], int i, int j)
{
	if (ar[j] < ar[i])
	{
		swap (ar[j], ar[i]);
	}
	
	if ((j - i + 1) > 2)
	{
		int t = (j - i + 1) / 3;
		stooge_sort (ar, i, j - t);
		stooge_sort (ar, i + t, j);
		stooge_sort (ar, i, j - t);
	}
}
//Driver Function
int main()
{
	int ar [] = {1, 2, 78, 18, 16, 30, 29, 2, 0, 199};

	cout << "Array Initially : ";
	print_ar (ar, 10);

	stooge_sort (ar, 0, 10);

	cout << "Sorted Array : ";
	print_ar (ar, 10);

	return 0;
}
