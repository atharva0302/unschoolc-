#include<iostream>
using namespace std;
class bhau
{

    int no;
public:
   bhau()
   {
       cout<<"enter a no:"<<no;
       cout<<"constructor is arrive";
       no=20;
       cout<<"value is no:"<<no;
   }
void get()
{
    no=10;
    cout<<"bulla"<<no;
}
~bhau()
{
    cout<<"destructor bhau";
}
void val()
{
    cout<<"enter"<<no;
}
};
int main()
{
    bhau p;
    p.get();
    p.val();
    return 0;
}
