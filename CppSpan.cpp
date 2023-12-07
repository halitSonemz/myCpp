// Example program
#include <iostream>
#include <string>

using namespace std ;

template<typename type>

void printfunC(type* begin , type* end){
    for(type* i = begin ; i != end ; i++){
        cout<<*i<<"-" ;
    }
}

int main(){
    int CapitalArray[]= {10,20,35,66} ;
    
    int* getBegin = begin(CapitalArray) ;
    int* getEnd =   end(CapitalArray) ;
    
    printfunC(getBegin,getEnd) ;
}
    