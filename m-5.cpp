#include<iostream>

using namespace std;
 
 class Pair
 {
    public:
      int a,b;
      int sum()
      {
         return a + b;        
      }
};
 int main()
 {
    Pair p;
    p.a=100;
    p.b=200;
    if(p.a+p.b == p.sum())
    {
        cout<<"success!"<<endl;
    }
    else
    {
        cout<<"p.sum() return"<<p.sum()<<"instead of"<<(p.a+p.b)<<endl;
    }
       return 0;
 }