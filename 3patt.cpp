#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	int row = 1, star = 1, spaces = n/2;
	while(row <= n){
		for(int i = 1; i <= spaces; i++)
			cout << "\t";
		for(int i = 1; i <= star; i++)
			cout <<"*";
		cout << endl;
		if(row <= n/2){
			star = star + 2;
			spaces = spaces - 1;
		}

		else {
			star = star - 2;
			spaces = spaces + 1;	
		}

	row++;

	}
}
