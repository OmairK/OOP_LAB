# include <iostream>
using namespace std;

class Shape{
    protected:
        int width,length;
    public:
    Shape(int a = 0, int b = 0){
        width = a;
        length = b;
    }
    void display(){
        cout << "Parent class function called and the shape maybe a circle"<<endl;
        
    }
};

class Rectangle : private Shape {
    public:
    Rectangle(int width,int length):Shape(width,length){}
    int area (){
        return (width*length);
    }
    void display(){
        cout<<"The area of the rectangle is "<<area()<<endl;
    }
};

class Square : public Rectangle {
    public:
    Square(int width):Rectangle(width,width){}
    void display(){
        cout<<"The area of the square is "<<area()<<endl;
    }
};
class Circle : public Shape {
    public:
    Circle(int width):Shape(width,width){}
    int area() {
        cout<<"The area of the circle is "<<3.14*width*width<<endl;
    }
    void display(){
        cout<<  "The circle class display called"<<endl;
    }
};
class Triangle : public Rectangle {
    public:
    Triangle(int width,int length): Rectangle(width,length){}
    void display(){
        cout<<"The area of the triangle is "<<area()/2<<endl;
    }

};


int main(){

    Square sq(9);
    Rectangle rec(3,4);
    sq.display();
    rec.display();
    
    Triangle tr(3,4);
    tr.display();

    Circle ab(5);
    Shape *ci;
    ci = &ab;
    // ci->area();
    ci->display();
    ab.display();
    ab.area();
    

    return 0;
}