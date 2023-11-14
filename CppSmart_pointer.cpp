#include <iostream>
#include <queue>
#include <memory>

using namespace std;

//example 1 : 
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


//example 2 : 


#include <iostream>
#include <memory>

using namespace std ;
 
struct CalcVariable
{
    int first ;
    int second ;
};

unique_ptr<int> functionSum(CalcVariable& Object){
    return make_unique<int>(Object.first + Object.second) ;
}

int main(){
    int first = 10 ;
    int second = 20 ;
    
    CalcVariable Object{first,second}; 
    unique_ptr<int> result = functionSum(Object) ;
    cout<<"sum result is : "<<*result ;
}
    
