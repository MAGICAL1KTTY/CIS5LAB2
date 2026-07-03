#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() 
{
	int age = 0;
	double height = 0;

	cout << "Depending on your age and height, you may or may not be elligible to get on this ride. Input your height in centimeters, and separate the values using a space." << endl;
	cin >> age >> height; 

	if (age >= 13 && height >= 122)
	{
		cout << "You are elligible to get on this ride." << endl;
	}
	else if (age < 13 || height < 122)
	{
		cout << "You are not elligible to get on this ride. Too BAD, so SAD." << endl;
	}
	return 0;
}