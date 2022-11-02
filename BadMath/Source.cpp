#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	float avg = (i1 + i2 + i3) / 3;
	return avg; 
}

int main()
{
	int n1;
	int n2;
	int n3;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: ";
	cin >> n1;
	cout << "Second number: ";
	cin >> n2;
	cout << "Third number: ";
	cin >> n3; //This was n2 

	float a = average(n1, n2, n3);

	cout << a << endl;

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}