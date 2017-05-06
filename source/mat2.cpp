#include "mat2.hpp"

Mat2::Mat2 ()

    : matrix [2][2] ([0][0] 1.0, [1][0] 0.0, [0][1] 0.0, [1][1] 1.0)
    {}

Mat2::Mat2 (double x1, double x2, double y1, double y2 )
    : matrix [2][2] ([0][0] x1, [1][0] x2, [0][1] y1, [1][1] y2)
    {}
