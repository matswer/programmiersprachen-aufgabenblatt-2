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
    a_ = a_ * m.a_ + b_ * m.c_;
    b_ = a_ * m.b_ + b_ * m.d_;
    c_ = c_ * m.a_ + d_ * m.c_;
    d_ = c_ * m.b_ + d_ * m.d_;
    return *this;
}

Mat2 operator * ( Mat2 const & m1 , Mat2 const & m2 )
{
    Mat2 m3;
    m3.a_ = m1.a_ * m2.a_ + m1.b_ * m2.c_;
    m3.b_ = m1.a_ * m2.b_ + m1.b_ * m2.d_;
    m3.c_ = m1.c_ * m2.a_ + m1.d_ * m2.c_;
    m3.d_ = m1.c_ * m2.b_ + m1.d_ * m2.d_;
return m3;
}
Vec2 operator * ( Vec2 const & v, Mat2 const & m)
{
    Vec2 v1;
    v1.x_= m.a_ * v.x_ + m.b_ * v.y_;
    v1.y_ = m.c_ * v.x_ + m.d_ * v.y_;
    return v1;
}

Vec2 operator * ( Mat2 const & m1, Vec2 const & v)
{
    Vec2 v2;
    v2.x_ = v.x_ * m1.a_ + v.y_ * m1.c_;
    v2.y_ = v.x_ * m1.b_ + v.y_ * m1.d_;
    return v2;
}

Mat2 inverse ( Mat2 const & m)
{
    Mat2 m2;
    float det1;
    det1 = m.det();
    if (det1 == 0)
    {
        return m;
    }
    else
    {
        m2.a_ = 1/det1 * m.d_;
        m2.b_ = 1/det1 * -m.b_;
        m2.c_ = 1/det1 * -m.c_;
        m2.d_ = 1/det1 * m.a_;
        return m2;
    }
}

Mat2 transpose (Mat2 const & m)
{
    Mat2 mt;
    mt.a_ = m.a_;
    mt.b_ = m.c_;
    mt.c_ = m.b_;
    mt.d_ = m.d_;
    return mt;
}


