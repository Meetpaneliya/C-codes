#include<iostream>
using namespace std;

void swap(int *a ,int *b)
{   
    //temp,a,b
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    int a=2 ,b=3;
    cout<<"the value of a is"<<a<<"and the value of b"<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a is"<<a<<"and the value of b"<<b<<endl;
    return 0;

}

