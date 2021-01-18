#include <iostream>
using namespace std;

class A
{
private:
    /* data */
    int i;
public:
    A(/* args */);
    ~A();
    void set(int j);
    void g(A* p);
};
A::A(/* args */)
{
    i = 0;
    cout << "object is created" << endl;
}
A::~A()
{
}

void A::g(A *p)
{
    cout << p->i <<endl;
}

void A::set(int j)
{
    i = j;
}

int main()
{
    A a;
    a.set(100);
    A b;
    b.g(&a);
    return 0;
}