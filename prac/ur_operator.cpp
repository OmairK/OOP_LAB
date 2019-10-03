#include <iostream>
using namespace std;
class Complex
{
private:
    float real, imaginary;

public:
    Complex() {}
    Complex(float a, float b):real(a),imaginary(b){}
    void operator++ (Complex &);
    // {
        // this->real += 1;
        // this->imaginary += 1;
    // }
    
    void showN()
    {
        cout<<" real "<<real<<" Imaginary "<< imaginary<<endl;
        cout<<" real "<<this->real<<" Imaginary "<<this->imaginary<<endl;

    }

};

void Complex::operator++(Complex &C)
{
        C.real += 1;
        C.imaginary += 1;
        
}


int main()
{
    Complex c(10,11);
    c.showN();
    c++;
    c.showN();


}