#include <iostream>
using namespace std;
int main(){
	cout << "Enter the value of n\n";
	int n;
	cin >> n;

	//for rows
	for(int row = 1; row <= n/2; row++){

	for(int i = n/2+1-row; i >= 1; i--)
		cout << "*";
	
	int spaces;
	for(spaces = 1; spaces <= 2*row-1; spaces++)
		cout << " ";

	for(int i = n/2+1-row; i >= 1; i--)
		cout << "*";

	cout << endl;
	
	
	
	}
}
