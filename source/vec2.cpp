#include "vec2.hpp"

Vec2::Vec2()       // Standardkonstruktor
  : x_(0.0), y_(0.0) // Memberinitialisierungsliste
  {}

Vec2::Vec2(float x, float y)
  : x_(x), y_(y)
{}

// x += y --- x = x + y
Vec2 & Vec2::operator +=( Vec2 const & v)
{
  x_ += v.x_;
  y_ += v.y_;

}

