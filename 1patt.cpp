#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the value of n\n";
	cin >> n;

	int row = 1, star = 1;
	while (row <= n){
		for(int i = 1; i <= star; i++)
			cout <<"*";
		
		if(row <= n/2){
			star = star + 1;
		}
		else {
			star = star - 1;
		}
		
		cout << endl;

		row++;
	}
}
