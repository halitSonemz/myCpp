#include <iostream>
#include <memory>

using namespace std ;

class SimpleCalculator{
    int Var1,Var2 ,Sum
    
    public :
        SimpleCalculator(int a , int b , int c):Var1(a) , Var2(b) , Sum(c){}
        SimpleCalculator& funcSum(SimpleCalculator& Object){
            Object.Sum = Object.Var1 + Object.Var2 ;
            return *this ;
        }
        
        int displaySum(){
            funcSum(*this) ;
            return Sum ;
        }
            
};

int main(){
    int Var1,Var2 ,Sum = 0;
    
    cout<<"enter your first number : "<<" ";
    cin>>x ;
    
    cout<<"enter your first number : "<<" ";
    cin>>y ;
    
    unique_ptr<SimpleCalculator> ObjectCalculator = make_unique<SimpleCalculator>(Var1,Var2 ,Sum) ;
    {
        cout<<"result sum is : "<<ObjectCalculator->displaySum() ;
    }
    
}
