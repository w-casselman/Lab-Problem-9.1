// P9-1
// Wesley Casselman
// October 26th of 2023

#include <iostream>
#include <ctime>

using namespace std;

void printArray(int array[], int size);
void printEvenIndices(int array[], int size);

int main(void)
{
	srand(time(0));
	
	const int SIZE = 10;
	
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		do
		{
			arr[i] = rand() % 10000;
		} while (arr[i] < 1000);
	}

	printArray(arr, SIZE);
	printEvenIndices(arr, SIZE);

	return 0;
}

void printArray(int array[], int size)
{
	cout << "The random integers: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
	return;
}

void printEvenIndices(int array[], int size)
{
	cout << "Even indices:        ";
	for (int i = 0; i < size; i += 2)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
	return;
}