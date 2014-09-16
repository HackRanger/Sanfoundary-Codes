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

//Function to find minimum element using Linear Search
int min_ele (int ar[], int size)
{
	int min = ar[0];
	
	//Linear Search
	for (int i = 0; i < size; ++i)
	{
		if (ar[i] < min)
		{
			min = ar[i];
		}
	}
	return min;
}
//Driver Function
int main()
{
	int ar [] = {1, 2, 78, 18, 16, 30, 29, 2, 0, 199};

	cout << "Your Array : ";
	print_ar (ar, 10);

	int min = min_ele (ar, 10);
	cout <<  "Minimum element : " << min << endl;

	return 0;
}
