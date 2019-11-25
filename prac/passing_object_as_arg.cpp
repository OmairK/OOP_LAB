#include <iostream>
using namespace std;

class Dimensions
{
private:
    int height, weight, lenght;

public:
    Dimensions(int h, int w, int l):height(h),weight(w),lenght(l){}
    void display(){
        cout<<height<<endl;
    }
    void BiggerBoxReference(Dimensions &D1, Dimensions &D2);
    void BiggerBox(Dimensions , Dimensions ); 
    ~Dimensions() {}
};
void Dimensions::BiggerBox(Dimensions D1, Dimensions D2)//by value
{   
    height = height + D1.height + D2.height;
    

}
void Dimensions::BiggerBoxReference(Dimensions &D1, Dimensions &D2)//by reference 
{
    height = height + D1.height + D2.height;
}

int main()
{
    Dimensions he(10,20,30),ll(20,30,40),oo(30,40,50);
    oo.BiggerBoxReference(he,ll);
    oo.display();
    return 0;
}