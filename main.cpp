//
//  main.cpp
//  Creational_1_FactoryMethod
//
//  Created by ChangMingfung on 8/7/16.
//  Copyright © 2016 ChangMingfung. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/* Abstract base class declared by framework */
class Shape
{
public:
    virtual void draw() = 0;
};

/* Concrete derived class defined by client */
class Retangle: public Shape
{
public:
    void draw(){cout << "   Draw retangle" << endl;}
};
/* Concrete derived class defined by client */
class Square: public Shape
{
public:
    void draw(){cout << "   Draw Square" << endl;}
};
/* Concrete derived class defined by client */
class Circle: public Shape
{
public:
    void draw(){ cout << "   Draw Circle" << endl;}
};

class ShapeFactory{
public:
    Shape* getShape(string type){
        if (type == "circle"){return new Circle();}
        if (type == "retangle"){return new Retangle();}
        if (type == "square"){return new Square();}
        return nullptr;
    }
};


int main(int argc, const char * argv[]) {
    ShapeFactory shapeFactory;
    Shape*  shape1 = shapeFactory.getShape("circle");
    shape1->draw();
    Shape*  shape2 = shapeFactory.getShape("retangle");
    shape2->draw();
    Shape*  shape3 = shapeFactory.getShape("retangle");
    shape3->draw();
    return 0;
}
