// Example program inheritance  in c++ 
#include <iostream>
#include <string>

using namespace std ;

class funC_Class{
    public :
        virtual int funcSum(int Variable_1,int Variable_2){
            return Variable_1 + Variable_2;
        }
        virtual int funcSub(int Variable_1,int Variable_2){
            return Variable_1 - Variable_2;
        }
};

class Calculator : public funC_Class {
    private :
        int Variable_1, Variable_2 ;
    public :
        Calculator(int var1 , int var2 ) : Variable_1(var1) , Variable_2(var2){}
        
        int funCSum(funC_Class& Object){
            return Object.funcSum(Variable_1,Variable_2);
        }
        
        int funCSub(funC_Class& Object){
            return Object.funcSub(Variable_1,Variable_2);
        }
};

int main(){
    int first_number ; 
    cout<<"Enter your number 1 : "<<" ";
    cin>>first_number;
    
    cout<<"Enter your number 2 : "<<" ";
    int second_number ;
    cin>>second_number ;
    Calculator variables_Object{first_number,second_number} ;
    cout<<"Sum is : "<<variables_Object.funCSum(variables_Object)<<"\n";
    cout<<"Sub is : "<<variables_Object.funCSub(variables_Object)<<"\n";
}  