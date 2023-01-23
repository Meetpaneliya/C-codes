#include<iostream>
using namespace std;

class book
{
    int price;
    char title[50];
    char publisher[30];
    public:
       void getdata();
       void putdata();
};
void book :: getdata()
{
    cout<<"enter the book title,price,publisher"<<endl;
    cin>>title>>price>>publisher;
}
void book :: putdata()
{
    cout<<"book name :"<<title<<endl;
    cout<<"book price :"<<price<<endl;
    cout<<"book publisher :"<<publisher<<endl;
}
int main()
{
    book b1,b2;
    b1.getdata();
    b1.putdata();
    b2.getdata();
    b2.putdata();
}
