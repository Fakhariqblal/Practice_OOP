#include <iostream>
#include <string>
using namespace std;

class Customer
{
    private:
    string name;
    int acc_num, balance;
    static int Total_Customer; 


    public:
        Customer(string name, int acc_num , int balance)
        {
            this->name = name;
            this->acc_num = acc_num;
            this->balance = balance;        
            Total_Customer++;
        }

        void print()
        {
            cout << name << " " << acc_num << " " << balance; 
            cout << endl;
            cout << Total_Customer << endl;
        }

        static void acceStatic()
        {
            cout << Total_Customer << endl;
            Customer c1("ali")
        }
};


int  Customer::Total_Customer = 0;

int main()
{
  
    Customer c1("ali" , 122 , 31939409);
    c1.print();
    Customer c2("Bilal" , 243 , 442242442);
    c2.print();
    
    Customer::acceStatic();

    return 0;
}