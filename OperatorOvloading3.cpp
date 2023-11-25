// Example program : calculate your age using operator overloading 
#include <iostream>
#include <string>

using namespace std; 

class Calculator{
    
    private :
        int CurrentYear ;
        int BirthYear ;
    public :
        Calculator(int first_,int second_ ){
            this->CurrentYear = first_ ;
            this->BirthYear = second_ ; 
        }
        
        int operator()(Calculator& Object){
            return Object.CurrentYear - Object.BirthYear  ;
        }
        
        int displayingSuB(Calculator& Object){
            return operator()(Object) ;
        }
};

int main(){
    int CurrentYear = 2023 ;
    int BirthYear= 1995 ;
    int resultSuB ;
    
    Calculator  Calculator_(CurrentYear,BirthYear) ;
    resultSuB = Calculator_.displayingSuB(Calculator_) ;
    cout<<"your age is :  "<<resultSuB ;
}
        
        // Example program : calculate your age using operator overloading 
#include <iostream>
#include <string>

using namespace std; 

class Calculator{
    
    private :
        int CurrentYear ;
        int BirthYear ;
    public :
        Calculator(int first_,int second_ ){
            this->CurrentYear = first_ ;
            this->BirthYear = second_ ; 
        }
        
        int operator()(Calculator& Object){
            return Object.CurrentYear - Object.BirthYear  ;
        }
        
        int displayingSuB(Calculator& Object){
            return operator()(Object) ;
        }
};

int main(){
    int CurrentYear = 2023 ;
    int BirthYear= 2003 ;
    int resultSuB ;
    
    Calculator  Calculator_(CurrentYear,BirthYear) ;
    resultSuB = Calculator_.displayingSuB(Calculator_) ;
    cout<<"your age is :  "<<resultSuB ;
}
        
        
