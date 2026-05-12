#include <iostream>
#include <string>

using namespace std;

class Shape{
    public:

    virtual void draw(){
        cout<< " default draw"<< endl ;
    }
};

class Circle: public Shape{
    public:
    void draw(){
        cout<< " Circl draw"<< endl;
    }
};
class Rectangle: public Shape{
    public:
    void draw(){
        cout<< " rectangle draw"<< endl;
    }
};

void Draw(Shape *s){

    s->draw();
}

int main(){
   // Rectangle c;
   // Draw(&c);

   // upcasting
   Shape *t = new Circle();
   Draw(t);

   Shape *n = new Shape();
   Draw(n);

   // downcasting
   Shape *m = new Shape();
   Circle *l = (Circle *)m;
   Draw(l);


}