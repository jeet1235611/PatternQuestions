#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	for(int row = 1; row <= n; row++){
		for(int spaces = 1; spaces <= n - row; spaces++){
			cout << " ";
		}

		int val = row;
		int tempVal;
		for(int col = 1; col <= 2*row - 1; col++){
			if(col <= row){
			tempVal = val;
			cout << val++;
			}
			else{
				cout << --tempVal;
			}
		}
		cout << endl;
	}
}
