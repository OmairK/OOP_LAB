#include <iostream>
using namespace std;
class Object
{
private:
    int number;

public:
    Object() {}
    Object(int a) : number(a) {}
    Object(Object &o)
    {   
        
        cout<<"Number "<<this->number<<endl;
        this->number = o.number;
        cout<<"Number "<<this->number<<endl;

    }
    ~Object(){}
};

int main(){
    Object b(20);
    Object a(b);
    return 1;

    
}
