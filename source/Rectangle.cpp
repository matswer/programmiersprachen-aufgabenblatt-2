#include <iostream>

#include "Rectangle.hpp"
using namespace std;  
             
             Rectangle::Rectangle() 
             {
               min_.x_ = 0.0; 
               min_.y_ = 0.0;
               max_.x_ = 1.0;
               max_.y_ = 1.0;
             }

             Rectangle::Rectangle (Vec2 min, Vec2 max) 
             {    
                  if (min.x_ > max.x_)
                  {
                  double temp;
                  temp = min.x_;
                  min.x_ = max.x_;
                  max.x_ = temp;
                  }
                  else if (min.y_ > max.y_)
                  {
                  double temp;
                  temp = min.y_;
                  min.y_ = max.y_;
                  max.y_ = temp;
                  }
                  else {}
             }
             
             Rectangle::~Rectangle()
             {}
             double Rectangle::area()
             {
                    return ((max_.x_ - min_.x_) * (max_.y_ - min_.y_));
                    }
             
             double Rectangle::circum()
              {
                    return (2 * (max_.x_ - min_.x_) + 2 * (max_.y_ - min_.y_)); 
                    }
