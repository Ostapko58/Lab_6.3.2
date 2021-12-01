#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void create(int* arr, int SIZE,int i)
{
	arr[i] = 50. * rand() / RAND_MAX - 20;
	if (i<SIZE-1)
	{
		create(arr, SIZE, i + 1);
	}
}

//template <typename T>
//void create2(T* arr, int SIZE, int i)
//{
//	arr[i] = 50. * rand() / RAND_MAX - 20;
//	if (i < SIZE - 1)
//	{
//		create(arr, SIZE, i + 1);
//	}
//}

void show(int* arr, int SIZE,int i)
{
	cout << setw(4) << arr[i];
	if (i<SIZE-1)
	{
		show(arr, SIZE, i + 1);
	}
}

//template <typename T>
//void show2(T* arr, int SIZE, int i)
//{
//	cout << setw(4) << arr[i];
//	if (i < SIZE - 1)
//	{
//		show(arr, SIZE, i + 1);
//	}
//}

void sort(int* arr, int SIZE,int i,int j,int &k)
{
	if (arr[j] < arr[j + 1])
	{
		int tmp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = tmp;
		k = 1;
	}
	if (j<SIZE-i-1)
	{
		sort(arr, SIZE, i, j + 1, k);
	}
	
	if (k==0)
	{
		return;
	}

	if (i<SIZE-1)
	{
		k = 0;
		sort(arr , SIZE, i + 1, 0, k);
	}
}

template <typename T>
void sort2(T* arr, int SIZE, int i, int j, int& k)
{
	if (arr[j] < arr[j + 1])
	{
		T tmp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = tmp;
		k = 1;
	}
	if (j < SIZE - i - 1)
	{
		sort(arr, SIZE, i, j + 1, k);
	}

	if (k == 0)
	{
		return;
	}

	if (i < SIZE - 1)
	{
		k = 0;
		sort(arr, SIZE, i + 1, 0, k);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int SIZE = 25;
	int arr[SIZE];
	int k = 0;
	
	create(arr, SIZE, 0);
	show(arr, SIZE, 0);
	sort(arr, SIZE,0,0,k);
	cout << endl;
	show(arr, SIZE, 0);
	cout << endl;
	cout << endl;
	
	create(arr, SIZE, 0);
	show(arr, SIZE, 0);
	sort2(arr, SIZE, 0, 0, k);
	cout << endl;
	show(arr, SIZE, 0);
	cout << endl;
	cout << endl;

	/*create2(arr, SIZE, 0);
	show2(arr, SIZE, 0);
	sort2(arr, SIZE, 0, 0, k);
	cout << endl;
	show2(arr, SIZE, 0);
	cout << endl;*/
	
	return 0;
}