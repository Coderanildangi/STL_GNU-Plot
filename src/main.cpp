#include<iostream>
#include "../header/fileOperation.h"
#include "../header/point.h"
#include "../header/triangle.h"


int main()
{
    FileOperation fileobj;
    
    fileobj.extractCoordinates();

    fileobj.getPoints();


    return 0;
}