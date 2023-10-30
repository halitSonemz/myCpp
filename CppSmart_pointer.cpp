#include <iostream>
#include <queue>
#include <memory>

using namespace std;

class Calculator
{
public:
       int funcSum(queue<int>&Queue, int& SumQueue) {
            for (int i = 0; i<sizeof(long) ; i++) {
                Queue.push(i);
            }

            while (!Queue.empty()) {
                SumQueue += Queue.front();
                Queue.pop();
            }
            return SumQueue;
       }
};

int main()
{
    queue<int>Queue;
    int SumQueue = 0;

    //using smart pointer instead of new & delete 
    //unique_ptr<Calculator>calculator(new Calculator()) or ;
    /*
    unique_ptr<Calculator>calculator = make_unique<Calculator>();   
    {
        int SumQ = calculator->funcSum(Queue, SumQueue);
        cout << "Queue Sum is  :" << SumQ;
    }
    */

    shared_ptr<Calculator>calculator = make_shared< Calculator>();
    int SumQ = calculator->funcSum(Queue, SumQueue);
    cout << "Sum Queue is : " << SumQ;
}