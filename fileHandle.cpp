#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int readAlphanum(char *source)
{

    string words;
    fstream fin;
    fin.open(source, ios::in);
    while (fin >> words)
    {

        int alphaFlag = 0, numberFlag = 0;
        for (int i = 0; words[i] != '\0'; i++)
        {
            if (isalpha(words[i]))
            {
                alphaFlag++;
            }
            else if (isdigit(words[i]))
            {
                numberFlag++;
            }
        }
        if (alphaFlag != 0 && numberFlag != 0)
        {
            cout << words << endl;
        }
    }
    fin.close();

    return 0;
}
int copy(char *destination, char *source)
{
    string lines;
    fstream fout;
    fout.open(destination, ios::out | ios::in);
    fstream fin;
    fin.open(source, ios::in);
    while (fin)
    {
        getline(fin, lines);
        fout << lines << endl;
    }
    fin.close();
    fout.close();
    return 0;
}

int readPosition(char *source)
{
    int start, end;
    cout << "Enter the starting and the ending position" << endl;
    cin >> start;
    cin >> end;
    fstream file;
    file.open(source, ios::in);

    if (file.is_open())
    {
        file.seekg(start);
        std::string s;
        s.resize(end - start);
        file.read(&s[0], end - start);
        cout << "The string from start to end is : " << s << endl;
    }
    file.close();
}

int main(int argc, char **argv)
{
    int choice;
    char *source = argv[1], *destination = argv[2];

    while (1)
    {
        cout << "Enter" << endl
             << "1) To read from the nth position" << endl
             << "2) To copy to a different file named destination.txt" << endl
             << "3) To print only alphanumeric words" << endl
             << "4) Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            readPosition(source);
            break;
        case 2:
            copy(destination, source);
            break;
        case 3:
            readAlphanum(source);
            break;
        case 4:
            return 0;
        }
    }
}