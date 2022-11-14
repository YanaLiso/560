#include <iostream>
#include <ctime>
using namespace std;
int main() {


	/*const int size = 12;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11 - 5;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << sum<< endl;*/


	/*const int size = 13;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25 - 12;
		cout << arr[i] << ' ';
	}
	cout << endl;
	long long prois = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			prois *= arr[i];
		}
	}
	cout << prois << endl;*/


	/*const int size = 11;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int kol = 1;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 ==0) {
			kol++;
		}
	}
	cout << kol << endl;*/


	const int size = 15;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 26;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0 ) {
			sum += arr[i];
		}
	}
	cout << sum << endl;
}