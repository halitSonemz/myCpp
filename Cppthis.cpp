class CppCalc
{
    private :
        int result ;
    public :
        CppCalc ():result(0){}
        CppCalc& firstCalc(int& first){
            result += first ;
            return *this ;
        }
        
        CppCalc& secondCalc(int& second){
            result += second ;
            return *this ;
        }
        
        int CppgetT(CppCalc& ObjectCalc){
            return ObjectCalc.result ;
        }
    
};

int main()
{
    int first = 15 , second = 20 ;
    CppCalc ObjectCalc  ;
    int Cppresult = ObjectCalc.firstCalc(first).secondCalc(second).CppgetT(ObjectCalc);
}




cout<"*****************************************************************************************"<<endl;

//example 2 : 

// Example program
#include <iostream>
#include <string>

using namespace std ;


class Calculator
{
    private :
        int first_number ;
        int second_number ;
        
    public :
        Calculator(int first_ , int second_) : first_number(first_), second_number(second_) {} 
        int SimpleCalcul ()const 
        {
            auto lambda = [this](){
                return first_number - second_number ;
            };
            return lambda() ;
        }
        
        int getresult() const {
            return SimpleCalcul() ;
        }
};

int main()
{
    int first = 2023 ;
    int second = 1997 ;
    
    Calculator  Calculator_(first,second);
    cout<<"Sum result is  :"<<Calculator_.getresult() ;
}
  
