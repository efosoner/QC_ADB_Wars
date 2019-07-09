#include <iostream>
using namespace std;

int main(void) {
	int input[2];
	int a;

	cin >> input[0];
	cin >> input[1];

	int *chan = new int[input[0]];

	for (int i = 0; i < input[0]; i++) {
		chan[i] = 0;
	}

	for (int j = 0; j < input[1]; j++) {
		cin >> a;
		chan[a - 1] = a;
	}

	cout.width(0);

	for (int k = 0; k < input[0]; k++) {
		if (chan[k] == 0) cout << k + 1 << "  ";
	}

}