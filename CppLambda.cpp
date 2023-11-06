#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int>numberVector = { 10,20,30,16 };
	int numberJ= 5 ;

	for_each(numberVector.begin(), numberVector.end(), [&](int x) {
		if (x % numberJ == 0) {
			cout << x << " could be divided by " << numberJ << endl;
		}
		else {
			cout << x << " could not be divided by " << numberJ<< endl;;
		}
	});
}
