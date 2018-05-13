#include <iostream>
using namespace std;
int main(){
	int rows, space, k = 0;
	cout << "Enter the value of rows\n";
	cin >> rows;
	
	
	for (int i = 1; i <= rows; i++){
		for(int space = 1; space <= rows - i; space++)
			cout << " ";

		while(k!=(2*i-1)){
			cout << "*";
			k++;		
		}	
		//int k = 0;
		cout << endl;
		k = 0;
	
	
	}
}
