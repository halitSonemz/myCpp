#include <iostream>
#include <forward_list>

using namespace std;

forward_list<int> forwardQ(forward_list<int>&forwardJ_1 , int& size)
{
    for(int i = 1 ; i<size+1 ; i++)
    {
        cin>>i ;
        forwardJ_1.push_front(i) ;
    }
    
    return forwardJ_1 ;
};

int main()
{
    forward_list<int>forwardJ_1 ;
    int size ;
    
    cout<<"please enter the forward size : "<<" ";
    cin>>size ;
    
    forward_list<int>forwardJ_2 = forwardQ(forwardJ_1,size) ;
    
    cout<<"the forward list content is : "<<" ";
    for(int i : forwardJ_2)
    {
        cout<<i<<" ";
    }
}
