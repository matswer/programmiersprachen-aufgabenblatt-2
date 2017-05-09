
#include "mat2.hpp"

class Rectangle
{
      private:
      Vec2 min_; 
      Vec2 max_; 
      
      public:
             Rectangle(); 
             Rectangle(Vec2 min, Vec2 max); 
             ~Rectangle();
             void setpoints(double r); 
             double getpoints();
             double area();         //Konstruktor Fläche
             double circum();       //Konstruktor Umfang
            
};