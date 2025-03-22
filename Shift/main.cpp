#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	const int  SIZE = 10;
	int arr[SIZE] = { 0,1,2,3,4,5,6,7,8,9 };
	int t,n;	
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << "\n";
	cout << "¬ведите количество сдвигов : ";
	cin >> n;
	cout << "\n";
	n = n % SIZE;
	for (int j = 0; j < n; j++)
	{
		t = arr[0];
		
		for (int i = 0; i < SIZE - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		 arr[SIZE- 1]=t;		
	}
	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";
	cout << endl;
}