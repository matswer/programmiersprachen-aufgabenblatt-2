#ifndef MAT2_HPP
#define MAT2_HPP
// Vec2 class definition
struct Mat2
 {
  Mat2 ();
  Mat2 ({{double, double}, {double, double}});
  double matrix [2][2];
  double x1;
  double x2;
  double y1;
  double y2;

  };
Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );

# endif // MAT2_HPP