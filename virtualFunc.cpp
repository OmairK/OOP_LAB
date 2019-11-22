#include <iostream>
using namespace std;
class Figure
{
private:
    double dim1;
    double dim2;

public:
    Figure(double a, double b) : dim1(a), dim2(b) {}
    Figure(){}
    virtual void CalcArea()
    {
        cout << "This the base class call" << endl;
    }
;} 
class Rectangle : public Figure
{
    public:
    
    void ClacArea()
    {
        cout << "This the derived class call" << endl;
    }

};

void main()
{
    Figure f;
    Rectangle r;
    Figure *ptr;

}