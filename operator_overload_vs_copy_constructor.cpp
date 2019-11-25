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
    readName("name.txt");
    return 0;
}