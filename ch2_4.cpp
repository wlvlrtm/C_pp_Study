#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;

	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age in months is " << age * 12 << endl;

	return 0;
}