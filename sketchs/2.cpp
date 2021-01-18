#include <iostream>

using namespace std;

class A
{
private:
    int i;
public:
    A();
    ~A();
    void geti(int c);
    int puti(void);
};

A::A(/* args */)
{
    cout << "object A is created"<< endl;
}

A::~A()
{
}

void A::geti(int c)
{
    i = c;
}

int A::puti(void)
{
    return i;
}

int main()
{
    A b;
    b.geti(5);
    cout << "i is " << b.puti()<< endl;
    return 0;
}