#include <iostream>
using namespace std;


class Complex{
    private:
        int a;
        int b; 
    public:
        Complex(int a , int b)
        {
            this->a = a;
            this->b = b;
        }
        friend Complex sum(Complex o1 , Complex o2);

        void printNumber()
        {
            cout << a << b << " i ";
        }
    };

Complex sum(Complex ob1 , Complex ob2)
{
    Complex o3(ob1.a + ob2.a , ob1.b + ob2.b);
    return o3;
}
int main()
{
    Complex c1(1,2);
    Complex c2(1 , 3);
    
    c1.printNumber();
    c2.printNumber();

    Complex c3 = sum(c1 , c2);
    c3.printNumber();

    return 0;
    
}
