#include <iostream>
using namespace std;


//Bucket Sort
void bucket_sort (int arr[], int n)
{
	int m = 101;
	//Create n empty buckets
	int buckets[m];

    //Intialize all buckets to 0
	for (int i = 0; i < m; ++i)
		buckets[i] = 0;
	
	//Increment the number of times each element is present in the input
	//array. Insert them in the buckets
	for (int i = 0; i < n; ++i)
		++buckets[arr[i]];
	
	//Transfer all buckets into arr[]
	for (int i = 0, j = 0; j < m; ++j)
		for (int k = buckets[j]; k > 0; --k)
			arr[i++] = j;
}


//Driver function to test above function
int main()
{	
    int input_ar[] = {10, 24, 22, 62, 1, 50, 100, 75, 2, 3};
	int n = sizeof (input_ar) / sizeof (input_ar[0]);
	bucket_sort (input_ar, n);
	
    cout << "Output : " << endl;	
	for (int i = 0; i < n; ++i)
		cout << input_ar[i] << " ";
	
    return 0;
}
