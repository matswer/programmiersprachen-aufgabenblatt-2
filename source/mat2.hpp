#ifndef MAT2_HPP
#define MAT2_HPP

#include "vec2.hpp"

// Mat2 class definition
struct Mat2
 {
  Mat2 ();
  Mat2 (double, double, double, double);
  double a_;
  double b_;
  double c_;
  double d_;
  float det() const;
  Mat2 & operator *=( Mat2 const & m);
  };

Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );

Vec2 operator *( Mat2 const & m, Vec2 const & v);
Vec2 operator *( Vec2 const & v, Mat2 const & m);

Mat2 inverse ( Mat2 const & m);
Mat2 transpose ( Mat2 const & m);
Mat2 make_rotation_mat2 ( float phi );

# endif // MAT2_HPP