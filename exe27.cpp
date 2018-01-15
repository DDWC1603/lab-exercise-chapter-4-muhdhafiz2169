/* Exercise 27

a) 0
b) 25, 4, 1, 0
c) line 9~20

*/

#include <iostream>

using namespace std;

int main() {
	int x = 10;
	
	while (x > 0) {
		x /= 2;
		cout << x*x << endl;
	}
}
