#include <iostream>
using namespace std;
class Complex;
class Calculator{
    public:
    int add(int a , int b)
    {
        return (a+b);
    }

    int sumReal(Complex o1, Complex o2);
    
};

class Complex{
    int a ,b;
    friend int Calculator::sumReal(Complex o1, Complex o2);

    public:
    void set(int n1 , int n2)
        {
            a = n1;
            b = n2; 
        }
    void print()
    {
        cout << a << " + " << b << endl;

    }


};


int Calculator::sumReal(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int main()
{
    return 0;
}
