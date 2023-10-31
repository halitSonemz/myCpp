#include <iostream>
#include <queue>
#include <memory>
#include <type_traits>

using namespace std;


class Calculator
{
public:
	template<typename type>
	typename enable_if<is_arithmetic<type>::value, type>::type
	funcSum(queue<type>numberQ, type& first, type& second , type& SumQ) {

		numberQ.push(first);
		numberQ.push(second);

		while(!numberQ.empty()) {
			SumQ += numberQ.front();
			numberQ.pop();
		}
		return SumQ;
	}
};

int main()
{
	queue<int>numberQ;

	int first = 10;
	int second = 20;
	int SumQ = 0 ;

	unique_ptr<Calculator>ObjectCalc = make_unique<Calculator>();
	int SumfunC = ObjectCalc->funcSum(numberQ, first, second, SumQ);
	cout << "Queue Sum is : " << SumfunC;
}