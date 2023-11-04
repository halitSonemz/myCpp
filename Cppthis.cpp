class CppCalc
{
    private :
        int result ;
    public :
        CppCalc ():result(0){}
        CppCalc& firstCalc(int& first){
            result += first ;
            return *this ;
        }
        
        CppCalc& secondCalc(int& second){
            result += second ;
            return *this ;
        }
        
        int CppgetT(CppCalc& ObjectCalc){
            return ObjectCalc.result ;
        }
    
};

int main()
{
    int first = 15 , second = 20 ;
    CppCalc ObjectCalc  ;
    int Cppresult = ObjectCalc.firstCalc(first).secondCalc(second).CppgetT(ObjectCalc);
}
  
