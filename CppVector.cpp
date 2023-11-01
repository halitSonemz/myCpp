#include<iostream>
#include<vector>

using namespace std ;

template <size_t size>

void better_func(vector<int>& vectorJ){
    vectorJ.resize(size) ;
    for(int i = 0 ; i<size ; i++)
    {
        vectorJ[i]= i ;
    }
}

void using_funcQ(){
    const size_t size = 16 ;
    vector<int>vectorJ ;
    better_func<size>(vectorJ) ;
    
    int sumJ = 0 ;
    for(int i : vectorJ){
        sumJ += i;
    }
    cout<<"Sum is : "<<sumJ ;
}


int main()
{
    using_funcQ() ;
}