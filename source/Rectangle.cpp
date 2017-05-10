#include <iostream>
#include "Rectangle.hpp"
using namespace std;  
             
             Rectangle::Rectangle() 
             {
               min_.x_ = 0.0; 
               min_.y_= 0.0;
               max_.x_ = 1.0;
               max_.y_ = 1.0;
             }
             Rectangle::Rectangle(Vec2 const& min, Vec2 const& max)
             : min_(min), max_(max)
             {}
             
             /*Rectangle::Rectangle (Vec2 min_, Vec2 max_) 
             {    
                  if (min_.x_ > max_.x_)
                  {
                  float temp;
                  temp = min_.x_;
                  min_.x_ = max_.x_;
                  max_.x_ = temp;
                  }
                  else if (min_.y_ > max_.y_)
                  {
                  float temp;
                  temp = min_.y_;
                  min_.y_ = max_.y_;
                  max_.y_ = temp;
                  }
                  else{} 
             }*/
             
             Rectangle::~Rectangle()
             {}
             float Rectangle::area ()
             {
                    return ((max_.x_ - min_.x_) * (max_.y_ - min_.y_));
                    }
             
             float Rectangle::circum()
              {
                    return (2 * (max_.x_ - min_.x_) + 2 * (max_.y_ - min_.y_)); 
                    }
