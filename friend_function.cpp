#include<iostream>
using namespace std;

class myclass
{
    int a,b;
    public:
    void set_ab(int i, int j);
    friend int sum(myclass x);
};

void myclass ::set_ab(int i, int j)
{
    a= i;
    b= j;
}

int sum(myclass x)
{
    return x.a+x.b;
}

int main()
{
    myclass n;
    n.set_ab(3,4);
    cout<< sum(n)<< endl;
    
    return 0;
}