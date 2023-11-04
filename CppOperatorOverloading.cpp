// Example program
#include <iostream>
#include <string>

using namespace std ;


//example 1 : 
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


cout<<"=====================================================================" ;

//example 2 :

// Example program
#include <iostream>
#include <string>

using namespace std ;

class calculator{
    private :
        int first , second ;
    public :
        calculator(int first_  , int second_) : first(first_), second(second_){}
        
        calculator operator +(const calculator& Object){
            calculator result(Object.first , Object.second) ;
            return result ;
        }
        
        void printfunc(calculator* Object){
            cout<<Object->first+Object->second ;
        }
        
};

int main()
{
    int first , second ;
    
    cout<<"Enter your first number : "<<" ";
    cin>>first ;
    cout<<"Enter your second number : "<<" ";
    cin>>second ;
    
    calculator*  calculator_1 = new calculator(first,second) ;
    cout<<"total sum is : "; 
    calculator_1->printfunc(calculator_1);
    delete calculator_1 ;
}
