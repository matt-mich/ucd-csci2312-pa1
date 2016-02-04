//
// Created by Matt Michaelis on 1/28/2016.
//

#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c){
    // Find the distances that will be the lengths of the triangle's sides.
    double AB = a.distanceTo(b);
    double BC = b.distanceTo(c);
    double CA = c.distanceTo(a);
    double S = (AB+BC+CA)/2.0;

    return sqrt(S*(S-AB)*(S-BC)*(S-CA));
}