#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int>numberVector = { 10,20,30,16 };
	int numberJ= 5 ;

	for_each(numberVector.begin(), numberVector.end(), [&](int x) {
		if (x % numberJ == 0) {
			cout << x << " could be divided by " << numberJ << endl;
		}
		else {
			cout << x << " could not be divided by " << numberJ<< endl;;
		}
	});
}


//second example  with a class 

#include <iostream>
#include <string>

using namespace std ;
 
class classOperator
{
    public :
        int Salefunction(int Originalpirce , int Saleprice){
            auto Operatorlambda = [&Originalpirce , &Saleprice](){
                return ((Originalpirce - Saleprice) / static_cast<double>(Originalpirce))*100;
            };
            return Operatorlambda() ;
        }
};

int main()
{
    int Originalpirce ;
    int Saleprice ;
    
    cout<<"Enter the Original pirce : "<<endl ;
    cin>>Originalpirce ;
    
    cout<<"Enter the Sale price     :  "<<endl ;
    cin>>Saleprice ;
    
    classOperator   classOperator_ ;
    cout<<"the product is discounted by "<<classOperator_.Salefunction(Originalpirce,Saleprice)<<"%." ;
}
    
