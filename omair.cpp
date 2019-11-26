#include <iostream>
#include <string>

using namespace std;

class Library
{
public:
    Library() {}
    virtual void Type()
    {
        cout << "Library" << endl;
    }
    int issue(int num)
    {
        cout << "Base class issue called" << endl;
        return 1;
    }
    int depositItem(int num)
    {
        cout << "Base class depositItem called" << endl;
        return 1;
    }
    void addItem(string auth, string tit, int no)
    {
        cout << "Base class addItem called" << endl;
    }
};

class Books : public Library
{
private:
    string author;
    string title;
    int number_of_copies;

public:
    Books(string auth, string tit, int no)
    {
        author = auth;
        title = tit;
        number_of_copies = no;
    }
    void Type()
    {
        cout << "Books" << endl;
    }
    int issue(int num)
    {
        number_of_copies = number_of_copies - num;
        cout << "Books class issue called" << endl;
        cout << "Books" << title << "  " << author << " " << number_of_copies << endl;
        return number_of_copies;
    }
    int depositItem(int num)
    {
        number_of_copies = number_of_copies + num;
        cout << "Books class depositItem called" << endl;
        cout << "Books" << title << "  " << author << " " << number_of_copies << endl;
        return number_of_copies;
    }
    void addItem(string auth, string tit, int no)
    {
        author = auth;
        title = tit;
        number_of_copies = no;
        cout << "Books class addItem called" << endl;
    }
};

class Tapes : public Library
{
private:
    string author;
    string title;
    int number_of_copies;

public:
    Tapes(string auth, string tit, int no)
    {
        author = auth;
        title = tit;
        number_of_copies = no;
    }
    void Type()
    {
        cout << "Tapes" << endl;
    }
    int issue(int num)
    {
        number_of_copies = number_of_copies - num;
        cout << "Tapes class issue called" << endl;
        cout << "Tapes" << title << "  " << author << " " << number_of_copies << endl;
        return number_of_copies;
    }
    int depositItem(int num)
    {
        number_of_copies = number_of_copies + num;
        cout << "Tapes class depositItem called" << endl;
        cout << "Tapes" << title << "  " << author << " " << number_of_copies << endl;
        return number_of_copies;
    }
    void addItem(string auth, string tit, int no)
    {
        author = auth;
        title = tit;
        number_of_copies = no;
        cout << "Tapes class addItem called" << endl;
    }
};

int main()
{
    Books b1("Ramesh", "Falcon01", 99);
    b1.issue(10);
    Library l1();
    Library *r;
    r = &b1;
    r->depositItem(100);
    r->Type();
    return 1;
}