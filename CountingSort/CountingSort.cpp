#include <iostream>
using namespace std;

void print_ar (int ar[], int size)
{

	for (int i = 0; i < size; ++i)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

void counting_sort (int ar[], int size)
{
	int c[45];
	for (int i = 1; i <= k; ++i)
	{
		c[i] = 0;
	}
	for (int i = 1; i <= size; ++i)
	{
		c[ar[i]] = c[ar[i]] + 1;
	}
	for (int i = 2; i <= k; ++i)
	{
		c[i] = c[] + c[i - 1];
	}
	for (int i = n; i >= 1; --j)
	{
		b[c[ar[
	}
}

int main()
{

	int ar [] = { 2, 13, 24, 45, 45, 6, 18, 16, 30, 29};

  cout << "Array Inititally : ";
	print_ar (ar[], 10);

	counting_sort (ar[], 10);

  cout << "Sorted Array : ";	
	print_ar (ar[], 10);
	return 0;
}
