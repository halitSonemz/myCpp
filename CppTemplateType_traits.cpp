#include <iostream>
#include <memory>
using namespace std;

template<class typeCalss , int size >
class Calculator {
public :
	using typeInt = int;
	static typeInt funcSum(typeInt& Current, typeInt& Born) {
		return Current - Born;
	}
};

int main()
{	
	int Current = 2023;
	int Born = 1995;

	typedef Calculator<int,sizeof(int)> calculatorInt_sizeof;
	calculatorInt_sizeof* caculator = nullptr;
	cout << "YOUR AGE IS : " << calculatorInt_sizeof::funcSum(Current, Born) << "\nTHE FUNC SIZE IS : " << sizeof(calculatorInt_sizeof::funcSum(Current, Born)) << "\n----------------------";
}