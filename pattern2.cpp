#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	
	int i = n/2,j = n/2;
	for(int row = 0; row < n; row++){
		for(int star = 0; star <= j; star++){
		if(star == i || star == j)
			cout << "*";
		else
			cout << " ";
		}
	
		if(row < n/2){
			i--;
			j++;
		}

		else {
			i++;
			j--;
		}

		cout << endl;
	}
}
