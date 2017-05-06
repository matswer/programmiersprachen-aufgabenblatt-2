class Circle
{
      private:
      double radius; 
      
      public:
             //default constructor
             //precondition: none
             //postcondition: an object has been instantiated with a default radius of 1. 
             Circle(); 
             
             //constructor
             //precondition: none
             //postcondition: an object has been instantiated with a default radius of r. 
             Circle(double r); 
             
             //Destructor
             //precondition: an object exists with a valid radius. 
             //postcondition: the object is destroyed 
             ~Circle();
             
             //Sets Radius
             //precondition: an object exists with a valid radius. 
             //postcondition: the radius is changed to r. 
             void setradius(double r); 
             
             //Gets Radius
             //precondition: an object exists with a valid radius. 
             //postcondition: the radius is changed to r. 
             double getradius();
             
             //Calculate the area
             //precondition: an object exists with a valid radius. 
             //postcondition: calculates and returns the area of the circle
             double area();
             
             //Calculate the circumference
             //precondition: an object exists with a valid radius. 
             //postcondition: calculates and returns the circumference of the circle
             double circum();
             
             //returns the diameter
             //precondition: an object exists with a valid radius. 
             //postcondition: returns the diameter of the circle
             double diameter();
             
             //prints info for a circle
             //precondition: an object exists with a valid radius. 
             //postcondition: prints all information about a circle
             void print();
             
             
             
             
          
             
      };//end of class definition 