#include <string>
#include <iostream>
using namespace std;

class Robot {
private:
    string model;
    int battery;
    static int totalRobots;

public:
    Robot(string m , int b)
    {
        model = m;
        battery = b;
        totalRobots++;
    }
    void dipslay()
    {
        cout << model << "   " <<  battery << "%" << endl; 
    }
    

    {

    }
};