#include <iostream>
using namespace std;

int main()
{
	int Packets = 40;
	int People = 14;
	int yourShare = Packets / People;
	int myShare = Packets % People;

	cout << "Students get: " << yourShare << " Packets each" << endl;	
	cout << "There is: " << myShare << " Packets left" << endl;

	return 0;
}