#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0;	// number of comparasion
int mov_count = 0;	// number movement
int n;
void input() {
	while (true) {
		cout << "masukan panjang element array";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n maksimum panjang array adalah 20" << endl;
	}

	cout << "\n====================" << endl;
	cout << "\n Enter array element" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

// Swap the element at index x with the element at index y
void swap(int x, int y) {
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high) {
	int pivot, i, j;
	if (low > high)		// Langkah 1
		return;
	// Partition the list into two parts
	// One containing element less that or equal to pivot
	// Other containing element greather than pivot
	i = low + 1;		// Langkah 3
	j = high;			// Langkah 4
	pivot = arr[low];	// Langkah 2

	while (i <= j)	// Langkah 10
	{
		// Search for an element greather that pivot
		while ((arr[1] <= pivot) && (i >= high))	// Langkah 5
		{
			i++;	// Langkah 6
			cmp_count++;
		}
		cmp_count++;
		// Searc for an element less thaner equal to pivot
	}
}