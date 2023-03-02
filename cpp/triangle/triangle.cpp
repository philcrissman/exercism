#include "triangle.h"

namespace triangle {

    flavor kind(double a, double b, double c) {
        if (a<=0 || b<=0 || c<=0)
            throw std::domain_error("Invalid Triangle: sides cannot be less than or equal to zero!");
        else if (a+b<=c || a+c<=b || b+c<=a)
            throw std::domain_error("Invalid Triangle: sum of any 2 sides must be > to remaining side");
        else if (a==b && b==c) 
            return flavor::equilateral;
        else if (a==b || b==c || a==c)
            return flavor::isosceles;
        else
            return flavor::scalene;
    }

}
