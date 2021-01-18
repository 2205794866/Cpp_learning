#include <iostream>
using namespace std;
class A
{
private:
    int x,y;
public:
    A(/* args */);
    ~A();
    void seta(int a, int b);
    void print();
};

A::A(/* args */)
{
}

A::~A()
{
}

void A::seta(int a, int b)
{
    x = a;
    y = b;
}

void A::print(void)
{
    cout << x << '\t' <<y <<endl;
}

int main()
{
    A a;
    a.seta(3, 5);
    a.print();
    return 0;
}
