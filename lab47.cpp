
#include <iostream>
using namespace std;

int main()
{
	int position, arr[5];

	cout << "Input 5 elements in the array in ascending order: " << endl;

	for (int i = 0;i < 5;++i) {
		cout << "element - " << i <<" : ";
		cin >> arr[i];
	}

	cout << "Input the position where to delete: ";
	cin >> position;    // if user enter 3 as a position --> this mean arr[2]

	for (int i = position;i < 5;++i) {
		arr[i - 1] = arr[i];
	}

	for (int i = 0;i < 4;++i) {
		cout << arr[i] << " ";
	}

	return 0;
}

