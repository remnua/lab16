#include <iostream>

using namespace std;

int main() {
	int arr[5][5];
	int n = 5;
	int par = 0;
	int nepar = 0;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			*(*(arr + i) + j) = (rand() % 1000) + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << *(*(arr + i) + j) << "\t";
		}
		cout << endl << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1) cout << *(*(arr + i) + j) << "\t";
			else cout << " " << "\t";
			if (*(*(arr + i) + j) % 2 == 0) par++;
			else nepar++;
		}
		cout << endl << endl;
	}
	cout << "Count of even: " << par << endl;
	cout << "Count of odd: " << nepar << endl;
}


