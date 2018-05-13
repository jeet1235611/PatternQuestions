#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter the value of n\n";
	cin >> n;
	int stars = 1, spaces = 2*n-3; 
	for(int row = 1; row <= n; row++){
		//for left stars
		for(int i = 1; i <= stars; i++)
			cout <<"*";
		//for center spaces
		for(int i = 1; i <= spaces; i++)
			cout <<" ";
		//for right stars
		for(int i = 1; i <= stars; i++)
			cout <<"*";
		cout << endl;
		spaces = spaces - 2;
		stars = stars + 1;
	
	}
}
