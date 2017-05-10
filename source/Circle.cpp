#include <iostream>

#include "Circle.hpp"
#include <Color.hpp>
using namespace std; 

const double PI = 3.14159; 
             
             Circle::Circle() 
             {
               radius = 1.0; 
             }

             Circle::Circle(double r) 
             {
                  if (r<=0)
                  {
                  radius = 1.0; 
                  }
                  else 
                  radius =r;          
                  }
             
             Circle::~Circle()
             {}
             double Circle::area()
             {
                    return (PI * (radius*radius));
                    }
             
             double Circle::circumference()
              {
                    return (2 * PI * radius); 
                    }
             double Circle::diameter()
              {
                    return (2 * radius);
                    }
