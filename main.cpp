#include <iostream>
using namespace std;

int main()
{
	int n1, n2, i, n3, n4, sum = 0;
	int N;
	cout << "Enter two initial values\n";
	cin >> n1 >> n2;
	do {
	cout << "Enter the number of sequences\n";
	cin >> N;
		if (N <= 2)
			cout << "Invalid Input. Please try again\n";
	}while( N <= 2);
	cout << n1 << " " << n2 << " ";

	for (i = 3; i <= N; i++)
		{
			n3 = n2 + n1;
			cout << n3 << " ";
			n1 = n2;
			n2 = n3;
		}
		return 0;
	}
	
