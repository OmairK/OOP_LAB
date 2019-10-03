#include <iostream>

using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex() {}
    Complex(float rea, float ima) : real(rea), imag(ima) {}
    friend void display(Complex &);
    friend Complex sum(Complex &, Complex &);
    ~Complex() {}
};

void display(Complex &C)
{
    cout << C.real << " + " << C.imag << "j" << endl;
}
Complex sum(Complex &C1, Complex &C2)
{
    // Complex C3;
    C1.real = C1.real + C2.real;
    C1.imag = C1.imag + C2.imag;
    return C1;
}
int main()
{
    Complex c1(10.2, 36.5), c2(100.2, 30.3), c3;

    display(c1);
    c3 = sum(c1, c2);
    display(c3);
    display(c1);
    return 0;
}