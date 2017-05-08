#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"


//Aufgabe 2.3
TEST_CASE ("der standardkonstruktor initialisiert die member mit 0", "[vec2.hpp]")
{ 
  Vec2 full{};
  REQUIRE(Approx(full.x_) == 0.0f);
  REQUIRE(Approx(full.y_) == 0.0f);
}

TEST_CASE ("describe_vec2.hpp", "[vec2.hpp]")
{ 
  Vec2 full(5.8664, 8.002);
  REQUIRE(Approx(full.x_) == 5.8664);
  REQUIRE(Approx(full.y_) == 8.002);
}
//Aufgabe 2.3
TEST_CASE ("Additions Operator", "[vec2.hpp]")
{ 
Vec2 vector1 (2.0, 4.0);
Vec2 full(5.8, 8.0);
full += vector1;
REQUIRE(Approx(full.x_) == 7.8);
REQUIRE(Approx(full.y_) == 12.0);
}

TEST_CASE ("Substraktions Operator", "[vec2.hpp]")
{ 
Vec2 vector1 (2.0, 4.0);
Vec2 full(5.8, 8.0);
full -= vector1;
REQUIRE(Approx(full.x_) == 3.8);
REQUIRE(Approx(full.y_) == 4.0);
}

TEST_CASE ("Multiplikations Operator", "[vec2.hpp]")
{ 
float multifloat1 = 2.0f;
Vec2 full(5.8, 8.0);
full *= multifloat1;
REQUIRE(Approx(full.x_) == 11.6);
REQUIRE(Approx(full.y_) == 16.0);
float multifloat2 = 0.0f;
Vec2 full1(5.8, 8.0);
full1 *= multifloat2;
REQUIRE(Approx(full1.x_) == 0.0);
REQUIRE(Approx(full1.y_) == 0.0);
}

TEST_CASE ("Divisions Operator", "[vec2.hpp]")
{ 
float multifloat1 = 2.0f;
Vec2 full(5.4, 8.0);
full /= multifloat1;
REQUIRE(Approx(full.x_) == 2.7);
REQUIRE(Approx(full.y_) == 4.0);
float multifloat2 = 5.8f;
Vec2 full1(5.8, 5.8);
full1 /= multifloat2;
REQUIRE(Approx(full1.x_) == 1.0);
REQUIRE(Approx(full1.y_) == 1.0);
}
//Aufgabe 2.4

TEST_CASE ("Addition", "[vec2.hpp]")
{ 
Vec2 vector_v (2.0, 4.0);
Vec2 vector_u(5.8, 8.0);
Vec2 vector_e(0.0, 0.0);
vector_e = vector_v + vector_u;
REQUIRE(Approx(vector_e.x_) == 7.8);
REQUIRE(Approx(vector_e.y_) == 12.0);
}

TEST_CASE ("Subtraktion", "[vec2.hpp]")
{ 
Vec2 vector_v (2.0, 4.0);
Vec2 vector_u(5.8, 8.0);
Vec2 vector_e(0.0, 0.0);
vector_e = vector_v - vector_u;
REQUIRE(Approx(vector_e.x_) == -3.8);
REQUIRE(Approx(vector_e.y_) == -4.0);
}
TEST_CASE ("Multiplikation float", "[vec2.hpp]")
{ 
float multifloat1 = 2.0f;
Vec2 vector_v (2.0, 4.0);
Vec2 vector_e(0.0, 0.0);
vector_e = vector_v * multifloat1;
REQUIRE(Approx(vector_e.x_) == 4.0);
REQUIRE(Approx(vector_e.y_) == 8.0);
}

TEST_CASE ("Division float", "[vec2.hpp]")
{ 
float multifloat1 = 2.0f;
Vec2 vector_v (20.0, 48.0);
Vec2 vector_e(0.0, 0.0);
vector_e = vector_v / multifloat1;
REQUIRE(Approx(vector_e.x_) == 10.0);
REQUIRE(Approx(vector_e.y_) == 24.0);
}
TEST_CASE ("Multiplikation float2", "[vec2.hpp]")
{ 
float multifloat1 = 2.0f;
Vec2 vector_v (2.0, 4.0);
Vec2 vector_e(0.0, 0.0);
vector_e = multifloat1 * vector_v;
REQUIRE(Approx(vector_e.x_) == 4.0);
REQUIRE(Approx(vector_e.y_) == 8.0);
}
//Aufgabe 2.5
TEST_CASE ("Matrix Übergabe", "[mat2.hpp]")
{ 
Mat2 leer {};
Mat2 full {11.0, 3.0, 0.0, 5.0};
REQUIRE(Approx(leer.a_) == 1.0);
REQUIRE(Approx(leer.b_) == 0.0);
REQUIRE(Approx(leer.c_) == 0.0);
REQUIRE(Approx(leer.d_) == 1.0);
REQUIRE(Approx(full.a_) == 11.0);
REQUIRE(Approx(full.b_) == 3.0);
REQUIRE(Approx(full.c_) == 0.0);
REQUIRE(Approx(full.d_) == 5.0);
}

TEST_CASE ("Determinante", "[mat2.hpp]")
{ 
Mat2 matrix {11.0, 3.0, 0.0, 5.0};
float det1 = matrix.det();
REQUIRE(Approx(det1) == 55.0);

}

//Aufgabe 2.5
TEST_CASE ("Matrix Multiplikation", "[mat2.hpp]")
{ 
Mat2 m1 {11.0, 5.0, 7.0, 10.0};
Mat2 m2 {11.0, 3.0, 0.0, 5.0};
Mat2 m3 {0.0, 0.0, 0.0, 0.0};
m3 = m1 * m2;
REQUIRE(Approx(m3.a_) == 121.0);
REQUIRE(Approx(m3.b_) == 58.0);
REQUIRE(Approx(m3.c_) == 77.0);
REQUIRE(Approx(m3.d_) == 71.0);
}

TEST_CASE ("Matrix Multiplikation", "[mat2.hpp]")
{ 
Mat2 m1 {11.0, 5.0, 7.0, 10.0};
Mat2 m2 {11.0, 3.0, 0.0, 5.0};
m1 = m1 * m2;
REQUIRE(Approx(m3.a_) == 121.0);
REQUIRE(Approx(m3.b_) == 58.0);
REQUIRE(Approx(m3.c_) == 77.0);
REQUIRE(Approx(m3.d_) == 71.0);
}

//Aufgabe 2.7
TEST_CASE ("Farbe", "[color.hpp]")
{ 
Color leer {};
Color black {0.0};
Color red {1.0, 0.0, 0.0};
Color over {230.0, 100.0, 100.0};
REQUIRE(Approx(black.r_) == 0.0);
REQUIRE(Approx(black.g_) == 0.0);
REQUIRE(Approx(black.b_) == 0.0);
REQUIRE(Approx(red.r_) == 1.0);
REQUIRE(Approx(red.g_) == 0.0);
REQUIRE(Approx(red.b_) == 0.0);
REQUIRE(Approx(over.r_) == 0.9019607902);
REQUIRE(Approx(over.g_) == 0.3921568692);
REQUIRE(Approx(over.b_) == 0.3921568692);

}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}


