#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Etner the value of n\n";
	cin >> n;

	int upRow = n / 3;

	for(int row = 1; row <= n; row ++){

		if(row <= upRow){
			for(int spaces = 1; spaces <= upRow-row; spaces++){
				cout << " ";
			}
			for(int stars = 1; stars <= 2*row - 1; stars++){
				cout << "*";
			}
			cout << endl;
		}

		else{
			for(int i = 1; i < upRow; i++)
				cout << " ";
			cout <<"*";
		}
		
		cout << endl;
	
	
	
	}

}
