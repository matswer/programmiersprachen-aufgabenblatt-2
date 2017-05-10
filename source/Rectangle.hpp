
#include "mat2.hpp"
#include "vec2.hpp"

class Rectangle
{
      private:
      
        Vec2 min_;
        Vec2 max_; 
        float a_;
        float b_;
        float c_;
        float d_;
      
      public:
             Rectangle(); 
             Rectangle(Vec2 const& min, Vec2 const& max);
             //Rectangle(Vec2 min_, Vec2 max_); 
             ~Rectangle();
             void setpoints(); 
             Vec2 const& min() const { return min_; }
             Vec2 const& max() const { return max_; } 
             float area();         //Konstruktor Fläche
             float circumference();       //Konstruktor Umfang
            
};