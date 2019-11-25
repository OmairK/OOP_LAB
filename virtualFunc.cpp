#include <iostream>
#include <fstream>
using namespace std;
void readName(string filename)
{
    ifstream file;
    file.open(filename, ios::in);
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
    file.close();
};
class Figure
{
private:
    double dim1;
    double dim2;

public:
    Figure(double a, double b) : dim1(a), dim2(b) {}
    Figure() {}
    virtual void CalcArea()
    {
        cout << "This the base class area call" << endl;
    }
    void Perimeter()
    {
        cout << "This is the base class perimeter call" << endl;
    }
};
class Rectangle : public Figure
{
public:
    void ClacArea()
    {
        cout << "This the derived class area call" << endl;
    }
    void Perimeter()
    {
        cout << "This is the derived class perimeter class"<<endl;
    }
};

int main()
{
    Figure f;
    Rectangle r;
    Figure *ptr;
    ptr = &r;
    ptr->CalcArea();
    ptr->Perimeter();

    readName("name.txt");
    return 0;
}