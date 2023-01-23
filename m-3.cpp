#include<iostream>

using namespace std;
int fibonaki (int n)
{
    if(n<2)
    {
     return 1;
    }
    return fibonaki(n-2) + fibonaki(n-1);
} 
int factorial (int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}   
int main()
{
        int a;
        cout<<"enter a number "<<endl;
        cin>>a;
        cout<<" the term in fibonaki sequnence at position "<< a <<" is "<< fibonaki(a)<<endl;
        cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
      return 0;
}