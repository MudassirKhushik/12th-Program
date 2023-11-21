//Task # 10: Write a program that accepts three numbers from the user and prints compares whether all three numbers are equal are not.
#include <iostream>
using namespace std;
int main (){
	int num1, num2, num3;
	cout << "Enter Three numbers :" << endl;
	cout << "First number : ";
	cin >> num1;
	cout << "Second number : ";
	cin >> num2;
	cout << "Third number : ";
	cin >> num3;
	
	if (num1 == num2 && num2 == num3) {
		cout << "The entered three numbers are equal. ";
	}
	else {
		cout << "The entered three numbers are not equal. ";
	}
	return 0;
}
