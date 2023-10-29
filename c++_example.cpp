#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main()
{
    vector<int>vectorJ = {1,2,3,4,5,6} ;
    
    if(all_of(vectorJ.cbegin() , vectorJ.cend(),[](int i){return i%2 == 0 ;}))
    {
        cout<<"all number are even" ;
    }
    else
    {
        cout<<"not all of them are even" ;
    }
}
    