#include "mat2.hpp"

Mat2::Mat2 ()

    : matrix ({{1.0, 0.0}, {0.0, 1.0}})
    {}

Mat2::Mat2 ({{double x1, double x2}, {double y1, double y2}})
    : matrix  ({{x1, x2}, {y1, y2}})
    {}
