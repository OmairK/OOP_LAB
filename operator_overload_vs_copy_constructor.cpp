#include <iostream>
using namespace std;

class Filez
{
private:
    int data;

public:
    Filez(){}
    Filez(int arg):data(arg){}
    Filez(Filez &a)
    {
        this->data = a.data;
        cout<<"Copy constructor called"<<endl;
    }
    void operator=(Filez &a)
    {   
        this->data = a.data;
        cout<<"Assignment operator overloaded"<<endl;
    }
};

int main()
{
    Filez a,b;
    Filez c=a;
    c=b;
}