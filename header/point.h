#pragma once
#include <string>
#include<iostream>

class Point
{
    double x,y,z;

    public :

        Point();
        ~Point();
        void setX(double);  //setter for X coordinate
        void setY(double);  //setter for Y coordinate
        void setZ(double);  //setter for Z coordinate
       // void pointvector(Point);
};