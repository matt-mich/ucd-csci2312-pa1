//
// Created by Matt Michaelis on 1/28/2016.
//


#include "Point.h"

Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}
Point::Point(double x1, double y1, double z1){
    x = x1;
    y = y1;
    z = z1;
}

// Mutator methods
void Point::setX(double newX){
    x = newX;
}
void Point::setY(double newY){
    y = newY;
}
void Point::setZ(double newZ){
    z = newZ;
}


// Accessor methods

double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}
double Point::getZ() const{
    return z;
}

// Distance calculation
double Point::distanceTo (const Point &P2) const{
    double p2X = P2.getX();
    double p2Y = P2.getY();
    double p2Z = P2.getZ();

    // The formula for distance with three dimensions is the square root of (x2-x1)^2+(y2-y1)^2+(z2-z1)^2
    return sqrt(pow((p2X-x),2.0)+pow((p2Y-y),2.0)+pow((p2Z-z),2.0));
}
