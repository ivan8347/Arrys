#include<iostream>
#include<conio.h>
#define ARRAYS
#define BIN
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");	
#ifdef ARRAYS
	int arr[100];
	int n;
	cout << "������� ������ ������� : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� ������� �������  [" << i << "] : ";
		cin >> arr[i];
	}
	cout << endl;
	cout << "����� ������� :  ";
	double  sum = 0;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];
	}
	cout << endl;
	cout << "����� ��������� ������� :  " << sum << endl;
	cout << "�������-�������������� ��������� :  " << sum / n << endl;
	cout << "����� ������� � �������� ������� :  ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	} cout << endl;
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}  cout << "����������� �������� ������ :  " << min << endl;
	cout << "������������ �������� ������ :  " << max << endl;
	cout << endl;
	cout << "����� ������� �� ����������� : ";
	int  t;

	for (int i = 0; i < n - 1; i++)
	{
		t = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[t] > arr[j])
			{
				t = j;
			}
			if (t != i)
			{
				int a = arr[i]; arr[i] = arr[t]; arr[t] = a;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl << "\n";

#endif // ARRAYS

#ifdef BIN
	int c ;
	cout << "������� ����� : ";
	cin >> c;
	for (int i = 65536; i >= 1; i /=2)
	{
		int a = c / i;
		c %= i;
		cout << a << " ";
	} cout << endl;

	for (int j = 65536; j >= 1; j /= 16)
	{
		int b = c / j;
		c %= j;
		b == 10 ? cout << "A " :
			b == 11 ? cout << "B " :
			b == 12 ? cout << "C " :
			b == 13 ? cout << "D " :
			b == 14 ? cout << "E " :
			b == 15 ? cout << "F " :

			cout << b << " ";
	} cout << endl;

#endif // BIN







}