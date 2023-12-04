#include <iostream>
#include <string>

using namespace std ;

class Node{
    public :
        int var1 ;
        int var2 ; 
        int Sum ;
        Node* next ;  
};

class Calculator  : public Node {

    public :
        int display(Node* head , int var1 , int var2, int Sum){
            
            Node* new_node = new Node() ;
            new_node->var1 = var1 ;
            new_node->var2 = var2 ;
            new_node->Sum  =  var1+var2 ;
            head = new_node->next ;
            return new_node->Sum ;
        }
};


int main(){
    int var1 ;
    int var2 ;
    int Sum  = 0 ;
    
    cout<<"Enter your Num1 : "<<endl;
    cin>>var1 ;
    cout<<"Enter your Num2 : "<<endl;
    cin>>var2 ;
    
    Node* head = nullptr ;
    Calculator* Object {} ;
    
    cout<<"sum is : "<<Object->display(head,var1,var2,Sum);
    
    Node* current = head ;
    
    while(current != nullptr){
        Node* next = current->next ;
        delete current ;
        current = next ;
    }
    
    delete Object ;
}
