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
		while ((arr[j] > pivot) && (j >= low))	// Langkah 7
			j--;	// Langkah 8
		cmp_count++; 
	}
	cmp_count++;
	if (i < j)	// Langkah 9
		// if greather element is on left of the element
	{
		// Swap the element at index i with the element at index j
		swap(i, j);
		mov_count++;
	}
	// Sort the list on the left of pivot using quick sort
	q_short(low, j - 1);	// Langkah 12
	// Sort the list on the right of pivot using quick sort
	q_short(j + 1, high);	// Langkah 13
}

void display() {
	cout << "\n=============" << endl;
	cout << "\n-sorted array" << endl;
	cout << "\n=============" << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\nnumber of comparison: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}

int main() {
	input();
		// Dort the array using quick sort
	q_short(0, n - 1);
	display();
	system("pause");

	return 0;
}