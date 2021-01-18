#include<iostream>
using namespace std;

class A
{
private:
    /* data */
    int i;
public:
    A();
    ~A();
    void set(int i);
};

A::A()
{
    i = 0;
    cout << "the object is created" << endl;
}

A::~A()
{
    cout << "A::~A,i = "<< i <<endl;
}
void A::set(int i)
{
    this ->i = i;
}

int main()
{
    int i;
    A *p = new A[10];
    for(i = 0; i< 10 ; i++)
    p[i].set(i);
    delete [] p;
    return 0;

}