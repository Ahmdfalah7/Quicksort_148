#include <iostream>
using namespace std;


int arr[20];			//array of integres to hold values
int cmp_count = 0;		//number of comparasion
int mov_count = 0;		//number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)					////Langkah Algoritma No. 1
		return;

	//Partition the list into two parts
	//One containing elements less that or equal to pivot
	//Outher conntainning elements greather than pivot

	pivot = arr[low];				//Langkah Algoritma No. 2

	i = low + 1;					//Langkah Algoritma No. 3
	j = high;						//Langkah Algoritma No. 4


	