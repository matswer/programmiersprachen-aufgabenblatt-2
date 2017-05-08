#include <iostream>

#include "Circle.hpp"



using namespace std; 

const double PI = 3.14159; 
             
             //default constructor
             //precondition: none
             //postcondition: an object has been instantiated with a default radius of 1. 
             Circle::Circle() 
             {
               radius = 1.0; 
                                        }
             //constructor
             //precondition: none
             //postcondition: an object has been instantiated with a default radius of r. 
             Circle::Circle(double r) 
             {
               if (r<=0)
               {
                        cout << "An invalid radius has been detected. " <<endl; 
                        cout << "The radius has been set to 1.0"<<endl; 
                        radius = 1.0; 
                        }
                        else 
                          radius =r; 
                       
             }
             
             //Destructor
             //precondition: an object exists with a valid radius. 
             //postcondition: the object is destroyed 
             Circle::~Circle()
             {
                   cout << "A circle died"<<endl; 
                   }
             
                    
             //Calculate the area
             //precondition: an object exists with a valid radius. 
             //postcondition: calculates and returns the area of the circle
             double Circle::area()
             {
                    return (PI * (radius*radius));
                    }
             
             //Calculate the circumference
             //precondition: an object exists with a valid radius. 
             //postcondition: calculates and returns the circumference of the circle
             double Circle::circum()
              {
                    return (2 * PI * radius); 
                    }
             
             //returns the diameter
             //precondition: an object exists with a valid radius. 
             //postcondition: returns the diameter of the circle
             double Circle::diameter()
              {
                    return (2 * radius);
                    }
             
             //prints info for a circle
             //precondition: an object exists with a valid radius. 
             //postcondition: prints all information about a circle
             void Circle::print()      
             {
                  cout <<"The info for the circle is as follows"<<endl; 
                  cout <<"Radius = "<<radius<<endl; 
                  cout <<"Diameter = "<<diameter()<<endl; 
                  cout <<"Area = " <<area()<<endl; 
                  cout <<"Circumference = "<<circum()<<endl; 
                  
                  
                  }       
