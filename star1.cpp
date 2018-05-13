#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 || i == n-1 || j == 0 ||  j == 2){
				cout << "*" ;
			}

			else {

				continue;
			}
		
		}

		cout << endl;

	
	}
}
