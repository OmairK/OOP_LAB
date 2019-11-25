#include <iostream>
#include <string.h>
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

class NewString
{
private:
    char *a;

public:
    NewString()
    {
        a = NULL;
    }
    NewString(string t)
    {
        a = new char[t.length() + 1];
        strcpy(a, t.c_str());
    }

    int stringSize() //Size of the string
    {
        int sizes;
        for (sizes = 0; a[sizes] != '\0'; sizes++)
        {
        }

        return sizes;
    }
    NewString operator+(NewString t) //Concatenate
    {
        NewString temp;
        int sizeOg;
        for (sizeOg = 0; this->a[sizeOg] != '\0'; sizeOg++)
            ;
        int sizeV = t.stringSize();
        int sizeTotal = sizeV + sizeOg;

        temp.a = new char[sizeTotal];
        int i, j, k;
        for (i = 0, j = 0, k = 0; i < sizeTotal; i++)
        {
            if (i < sizeOg)
            {
                temp.a[i] = this->a[j];
                j++;
            }
            else
            {
                temp.a[i] = t.a[k];
                k++;
            }
        }
        return temp;
    }

    NewString operator=(NewString t) //Asignment operator
    {
        this->a = t.a;
    }

    friend ostream &operator<<(ostream &output, NewString tots)
    {
        output << tots.a << endl;
    }

    int operator==(NewString arg) //Comparing the size operator
    {
        int sizeArg = arg.stringSize();
        if (this->stringSize() != sizeArg)
        {
            return 0;
        }
        int i;
        for (i = 0; arg.a[i] != '\0'; i++)
        {
            if (this->a[i] != arg.a[i])
            {
                return 0;
            }
        }
        return 1;
    }
};
int main()
{
    string greet = "Hello world\n";
    string shoot = "How is your day?\n";
    NewString omair(greet);
    NewString ok(shoot);
    NewString ok2;
    cout << omair + ok << endl;
    if (omair == ok)
    {
        cout << "The strings are equal" << endl;
    }
    else
    {
        cout << "The strings are not equal" << endl;
    }
    readName("name.txt");   
    return 0;
}