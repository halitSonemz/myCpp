// Example program
#include <iostream>
#include <string>

using namespace std ;

class Calculator
{
    private  : 
        int number1  ;
    public :
        Calculator(int number1_) : number1(number1_){}
        
        Calculator operator +(const Calculator& Object){
            Calculator result(number1 + Object.number1);
            return result ;
        }
        
        friend ostream& operator<<(ostream& out ,  Calculator& Object) ;
};

ostream& operator<<(ostream& out ,  Calculator& Object){
            out<<Object.number1 ;
            return out ;
}
        
int main()
{
    Calculator calculator_1(10) ;
    Calculator calculator_2(10) ;
    Calculator total = calculator_1 + calculator_2 ;
    cout<<"total is : "<<total ;
}