#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	for(int row = 1; row <= n; row ++){
		
		if(row % 2 != 0){
			for(int i = 1; i <= n; i++){
				cout << "*";
				cout << " ";
			}
		cout << endl;
		}
		
		else {
			for(int i = 1; i <= n; i++){
				cout << " ";
				cout << "*";
			}
		cout << endl;
		}
	}

}
