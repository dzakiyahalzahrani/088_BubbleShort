#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "Maukan banyaknya elemen pada array :";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 elemen. \n";
		}
	}
	cout << "====================" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
void bubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j = 1];
				arr[j + 1] = temp;

			}
		}
		pass = pass + 1;

		cout << endl;
	} while (pass <= n - 1);

}
void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang Telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;




