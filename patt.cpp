#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	for(int row = 1; row <= n; row++){
		int value = 1;
		for(int space = 1; space <= n - row; space++)
			cout <<" ";
		int col = 1;
		while(col <= ( 2*row - 1)){
			int tempValue;
			if(value <= row){
				tempValue = value;
				cout << value++;
			}	
			else{
				//value = value - 2;
				cout << --tempValue;
			}
				
		col++;
		}
		cout << endl;
	}
}
