#include <iostream>
using namesapce std;
int main(){
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	int row, = 1, star = 1, space = n/2;
	while (row <= n) {
		for(int i = 1; i <= n; i++)
			cout <<"*";

		if(star <= n/2)
			star = star + 2;
		else
			star = star - 2;
		
	row++;

	}
}
