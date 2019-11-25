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



class Box{
    
        
    public:
        float length,breadth,height;
        Box(){}
        Box(float l,float b,float h):length(l),breadth(b),height(h){}
        
        friend double Volume(Box box);
        friend double SurfaceArea(Box box);
        inline void display();

        

};

inline void Box::display(){
            cout<<"\n Dimensions \n     Height: "<<height<<"\n    Length: "<<length<<"\n    Breadth: "<<breadth<<endl;
        }

double volume(Box box){
    return(box.length*box.height*box.breadth);
}

double surfaceArea(Box box){
    return(2*(box.length*box.height + box.breadth*box.height + box.length*box.breadth));
}

int main(){
    float len,bre,hei;
    cout<<"Enter the dimensions of the box"<<endl;
    cout<<"Enter the length"<<endl;
    cin>>len;
    cout<<"Enter the breadth"<<endl;
    cin>>bre;
    cout<<"Enter the height"<<endl;
    cin>>hei;

    Box box = Box(len,bre,hei);
    box.display();
    cout<<"The surface area is "<<surfaceArea(box)<<endl;
    cout<<"The volume is "<<volume(box)<<endl;
    readName("name.txt");
    return 1;

}