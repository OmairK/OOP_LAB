#include <iostream>
#include <string.h>
using namespace std;
class Person
{

private:
    char *name;
    int age = 18;

public:
    Person(){}
    Person(string na){
        // int a = sizeof(na) + 1; 
        // cout<<a;
        cout<<"Invoking the constructor"<<endl;
        name = new char[na.length() + 1];
        strcpy(name, na.c_str());

    }

    void display(){
        cout<<name<<endl<<age<<endl;
    }
    Person(Person &p){
        cout<<"Calling user defined copy constructor"<<endl;
        name = p.name;
        age = p.age;
    }
    //Destructors cant be overwritten although the can modified with help of booleans and if else conditionals to behave certain way
    ~Person(){
        cout<<"Invoking the destructor"<<endl;
        delete[] name;
    } 

};

int main()
{
    Person p1("OmairKhan"),p2;
    p2 = p1;
    Person p3(p1);   
    p1.display();
    p2.display();
    p3.display();
    
    return 0;
}