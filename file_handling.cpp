#include <fstream>
#include <iostream>
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

void readFile(string filename)
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
}

void writeFile(string filename)
{
    ofstream file;
    file.open(filename, ios::out);
    string line;
    if (file.is_open())
    {

        cout << "Enter Text : (Press EXIT to exit) \n";

        do
        {
            getline(cin, line);
            if (line == "EXIT")
                break;
            file << line << endl;
        } while (1);
        file.close();
    }
}

void appendFile(string filename)
{
    fstream file;
    file.open(filename, ios::in | ios::out | ios::app | ios::ate);
    string line;
    readFile(filename);
    if (file.is_open())
    {

        cout << "\nEnter Appended Text : (Press EXIT to exit) \n";
        do
        {
            getline(cin, line);
            if (line == "EXIT")
                break;
            file
                << line << endl;
        } while (1);
        file.close();
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    string filename;
    if (argc == 1)
    {
        filename = "test.txt";
    }
    else
    {
        filename = argv[1];
    }

    do
    {
        cout << "\n\nFile Handling! We will be modifying the file :- " << filename;
        cout << "\n1. Read From File\n2. Write to file (Delete Old)\n3. Append to File\n4. Exit\n\n Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            readFile(filename);
            break;
        case 2:
            writeFile(filename);
            break;
        case 3:
            appendFile(filename);

        default:
            break;
        }

    } while (choice != 4);

    // readFile("./text.txt");
    // writeFile();
    readFile("name.txt");
    return 0;
}