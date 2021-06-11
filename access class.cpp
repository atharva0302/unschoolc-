#include<iostream>
using namespace std;
class triangle
{

    float length,breadth,high;
public:
    void val(int x,int y,int z)
    {
        length=x;
        breadth=y;
        high=z;
    }
    void area()
    {
        cout<<"area:"<<length*high*breadth;
    }
};
int main()
{
    triangle j;
    j.val(2,4,2);
    j.area();
}
