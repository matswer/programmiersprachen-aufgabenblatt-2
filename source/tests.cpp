#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


//Aufgabe 2.3
TEST_CASE ("describe_vec2.hpp", "[vec2.hpp]")
{ 
Vec2 leer{};
Vec2 full(5.8664, 8.002);
REQUIRE(Approx(leer.x_) == 0.0);
REQUIRE(Approx(leer.y_) == 0.0);
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

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

