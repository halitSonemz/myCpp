#include <iostream>
#include <queue>

using namespace std ;

int funcQ(queue<int>& numberQ , int& SumQ){
    
    for(int i = 0 ; i<sizeof(int) ; i++){
        numberQ.push(i) ;
    }
    
    for(int i = 0 ; i<sizeof(int) ; i++){
        SumQ += numberQ.front();
        numberQ.pop();
    }
    //or you could use while loop 
    /*
        while(!numberQ.empty()){
        SumQ += numberQ.front();
        numberQ.pop();
    }
    */
    return SumQ ;
}

int main()
{
    queue<int>numberQ ;
    int SumQ  = funcQ(numberQ,SumQ);
    cout<<"Queue sum is : "<<SumQ ;
}
