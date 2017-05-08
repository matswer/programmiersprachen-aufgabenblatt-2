#include "mat2.hpp"

Mat2::Mat2 ()
    : a_(1.0), b_(0.0), c_(0.0), d_(1.0)
    {}


Mat2::Mat2 (double a, double b, double c, double d)
    : a_(a), b_(b), c_(c), d_(d)
    {}


float Mat2::det() const
{
return a_ * d_ - b_ * c_; 
}

Mat2 & Mat2::operator *= (Mat2 const & m)
{
    a_ = m.a_ * a_ + b_ * m.c_;
    b_ = m.a_ * b_ + b_ * m.d_;
    c_ = m.c_ * a_ + d_ * m.c_;
    d_ = m.c_ * b_ + d_ * m.d_;
    return *this;
}

Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 )
{
Mat2 m3;
m3.a_ = m1.a_ * m2.a_ + m1.b_ * m2.c_;
m3.b_ = m1.a_ * m2.b_ + m1.b_ * m2.d_;
m3.c_ = m1.c_ * m2.a_ + m1.d_ * m2.c_;
m3.d_ = m1.c_ * m2.b_ + m1.d_ * m2.d_;
return m3;
}


