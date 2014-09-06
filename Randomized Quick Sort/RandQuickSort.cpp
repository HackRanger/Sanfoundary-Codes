//This is a C++  Program to Sort an Array using Randomized Quick Sort
#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;


void print_ar (int ar[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

//Quick Sort Function
void quick_sort (int ar[], int left, int right)
{
	int l = left, r =  right - 1, size = right - left;
	
	//If some elements present
	if (size > 1)
	{
		//Getting a Random Pivot
		int rand_index = rand () % size + l;
		int pivot = ar[rand_index];
		
		//Process to place the pivot at correct point
		while (l < r)
		{
			while (ar[r] > pivot && r > l)
			{
				--r;
			}
			while (ar[l] < pivot && l <= r)
			{
				++l;
			}

			if (l < r)
			{
				swap (ar[l], ar[r]);
				++l;
			}

		}
	
		//Call recursively
		quick_sort (ar, left, l);
		quick_sort (ar, r, right);
	}

}

//Driver Function
int main()
{
    ios_base::sync_with_stdio(0);
	int ar [] = {2, 10, 5, 29, 18, 16, 30, 100, 0, 1};
	
	cout << "Array Intially : ";
	print_ar (ar, SIZE);
	quick_sort (ar, 0, SIZE);
	cout << "Sorted Array : ";
	print_ar (ar, SIZE);

    return 0;
}
