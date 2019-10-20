#include <iostream>

using namespace std;

int getnum(){
	int x;
	cout << "Enter a number: "<<endl;
	cin >> x;
	return x;
}

int main(){
	int x;
	int y;
	int result;
	x = getnum();
	y = x;

cout << "The numbers are: "<< x << "   " << y <<endl;
	
	result = x + y;

	cout << "The sum of the you enter are: "<< result <<endl;
}

