#include <iostream>

#include <fstream>
using namespace std;
void readName(string filename){
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
    
}

class Hexa
{
private:
    int Hn;

public:
    Hexa()
    {
        cout << "Hexa unparametrized constructor called" << endl;
    }
    Hexa(int n) : Hn(n)
    {
        cout << "Hexa parametrized constructor called" << endl;
    }
    ~Hexa()
    {
        cout<<"Hexa destructor called"<<endl;
    }
};

class Alpha : public Hexa
{
private:
    int Aa, Ab;
    int c;

public:
    Alpha()
    {
        c = 100;
        cout << "Alpha unparametrized constructor called" << endl;
    }
    Alpha(int arg1, int arg2, int arg3) : Aa(arg1), Ab(arg2), c(arg3)
    {
        cout << "Alpha parametrized constructor called" << endl;
    }
    int getC()
    {
        return c;
    }
    ~Alpha()
    {
        cout<<"Alpha destructor called"<<endl;
    }
};

class Beta : public Hexa
{
private:
    int Bd, Be;
    int c;

public:
    Beta()
    {
        c = 10;
        cout << "Beta unparametrized constructor called" << endl;
    }
    Beta(int arg1, int arg2, int arg3) : c(arg1), Bd(arg2), Be(arg3)
    {
        cout << "Beta parametrized constructor called" << endl;
    }
    int getC()
    {
        return c;
    }
    ~Beta()
    {
        cout<<"Beta destructor called"<<endl;
    }
};

class Gamma : public Beta, public Alpha
{
private:
    int f, g;

public:
    Gamma()
    {
        cout << "Gamma unparametrized constructor called" << endl;
    }
    Gamma(int arg1, int arg2) : f(arg1), g(arg2)
    {
        cout << "Gamma parametrized constructor called" << endl;
    }
    ~Gamma() 
    {
        cout << "Gamma destructor called" << endl;
    }
    // void display()
};

int main()
{
    Gamma x;
    cout << x.Alpha::getC() << endl;
    readName("name.txt");

    return 0;
}