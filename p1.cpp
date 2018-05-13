#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;



	for(int row = 1; row <= n; row++){
		for(int spaces = 1; spaces <= n - row; spaces ++)
			cout << " ";
		int val = 1;
		for(int i = 1; i <= 2*row - 1; i ++){
			int tempVal;
			if(i <= row){
				tempVal = val-1;
				cout << val++;
			}
			else{
				cout << tempVal--;
			}

		}
		cout << endl;
	}
}
