#include <iostream>
#include <stack>

using namespace std ;

stack <int>functionchecker(stack<int> Stack){
    while(Stack.empty()){
        cout<<Stack.top();
        Stack.pop();
    }
    return Stack ;
}

int main(){
    
    stack<int>Stack ;
    
    for(int i = 0 ;i<sizeof(int) ; i++){
            Stack.push(i);
        }
        
    stack<int> resultStack = functionchecker(Stack) ;
    
    if(!resultStack.empty()){
        cout<<"result stack is not empty ! "<<endl;
        for(int i = 0 ; i<sizeof(int) ; i++){
            cout<<resultStack.top()<<"-";
            resultStack.pop();
        }
    }else{
        cout<<"result stack is empty ! " ;
    }
}