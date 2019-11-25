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

class UnaryOperatorOverloading
{
    int num;

public:
    UnaryOperatorOverloading(int a) : num(a) {}

    int operator--()
    {
        num = num + 3;
    }
    int wasShow()
    {
        cout<<"The number was: "<<num<<endl;
    }
    int show()
    {
        cout<<"The number is: "<<num<<endl;
    }
};

class BinaryOperatorOverloading{
    int num;

    public:
    BinaryOperatorOverloading(int a) : num(a) {}
    int operator*(BinaryOperatorOverloading obj)
    {
        return obj.num + num;
    }
    int wasShow()
    {
        cout<<"The number was: "<<num<<endl;
    }
    int show()
    {
        cout<<"The number is: "<<num<<endl;
    }

};

int main()
{
    int temp;
    int ch = 0;
    
    
    while (ch != 3)
    
    {   
        
        cout << "\n1.Unary Operator" << endl
         << "2.Binary Operator" << endl
         << "3.Exit" << endl;
         cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the number: " << endl;
            cin >> temp;
            UnaryOperatorOverloading obj = UnaryOperatorOverloading(temp);
            obj.wasShow();
            --obj;
            obj.show();
            break;
        }
        case 2:
        {   cout<<"Enter the first number:  "<<endl;
            cin>>temp;
            BinaryOperatorOverloading obj1 = BinaryOperatorOverloading(temp);
            
            cout<<"Enter the second number: "<<endl;
            cin>>temp;
            BinaryOperatorOverloading obj2 = BinaryOperatorOverloading(temp);
            cout<<"This is binary * operator overloading: "<<obj1*obj2;
            break;    
        }
        
        }
    }
    readName("name.txt");
    return 0;
}