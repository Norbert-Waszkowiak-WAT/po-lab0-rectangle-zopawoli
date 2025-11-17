#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    rectangle(double w, double h)
       : width(w), height(h) {}
void setWidth(double w){
width = w;
}
void setHeight(double h){
    height = h;
}
double getwidth()const{
    return width;
}
double getheight()const{
    return height;
}
double area()const{
    return width*height
}
double perimeter() const{
    return 2* (width + height);
}
void display() const{
    cout << "Rectangle: " << width <<  " x " << height << endl;
    cout << "area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}
};