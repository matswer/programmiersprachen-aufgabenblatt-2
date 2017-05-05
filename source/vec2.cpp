#include "vec2.hpp"

Vec2::Vec2()       // Standardkonstruktor
  : x_(0.0), y_(0.0) // Memberinitialisierungsliste
  {}

Vec2::Vec2(float x, float y)
  : x_(x), y_(y)
{}

// Additionsoperator

Vec2 & Vec2::operator +=( Vec2 const & v)
{
  x_ += v.x_;
  y_ += v.y_;
  return *this;
}

// Substraktionsoperator

Vec2 & Vec2::operator -=( Vec2 const & v)
{
  x_ -= v.x_;
  y_ -= v.y_;
  return *this;
}

// Multiplikationsoperator

Vec2 & Vec2::operator *=( float s)
{
  x_ *= s;
  y_ *= s;
  return *this;
}

// Divisionsoperator

Vec2 & Vec2::operator /=( float s)
{
  x_ /= s;
  y_ /= s;
  return *this;
}

// Aditionsoperator
Vec2 const operator +( Vec2 const & u, Vec2 const & v)
{
  Vec2 temp(u);
  temp += v;
  return temp; 
}

// Subtraktionsoperator
Vec2 const operator -( Vec2 const & u, Vec2 const & v)
{
  Vec2 temp(u);
  temp -= v;
  return temp; 
}

// Multiplikationsoperator float
Vec2 const operator *( Vec2 const & v, float s)
{
  Vec2 temp(v);
  temp *= s;
  return temp; 
}

// Divisionsoperator float
Vec2 const operator /( Vec2 const & v, float s)
{
  Vec2 temp(v);
  temp /= s;
  return temp; 
}

// Multiplikationsoperator float2
Vec2 const operator *(float s, Vec2 const & v)
{
  Vec2 temp(v);
  temp *= s;
  return temp; 
}