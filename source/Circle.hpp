#include <Color.hpp>

class Circle
{
      private:
      double radius; 
      Color rgb_;
      
      public:
             Circle(); 
             Circle(double r); 
             Circle(Color const& rgb);
             ~Circle();
             void setradius(double r); 
             double getradius();
             double area();         //Konstruktor Fläche
             double circumference();       //Konstruktor Umfang
             double diameter();     //Konstruktor Durchmesser
             Color const& color() const { return rgb_; } 
            
};