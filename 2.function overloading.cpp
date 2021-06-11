#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
    cout<<"enter a sum"<<x+y;
}
float sum(float a,float b)
{
    return a+b;
     cout<<"enter a sum"<<a+b;
}
int main()
{
    int p;
    float q;
    p=sum(1,2);
    q=sum(1.1,2);
    cout<<"enter a value of  p and q"<<p<<q<<endl;
    return 0;
}
