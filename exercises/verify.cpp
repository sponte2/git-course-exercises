/*
Write a software that verifies if a number is present in a pre-defined array.

Output example:
Insert number 3
The number 3 is [not] present in the array.
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Inser number: ";
	cin >> x;
	cout << endl;
  	// placeholder
  	int N[10] = [ 3, 4, 5, 1, 2, 3, 4, 9, 13, 0 ];
	for (int i=0;i<10;i++){
		if (N[i]==x){
			cout << "The number " << i << " is present in the array.";
		}
	}
  	return 0;
}
