#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"



TEST_CASE ("describe_vec2.hpp", "[vec2.hpp]")
{ 
Vec2 leer{};
Vec2 full(5.8664, 8.002);
REQUIRE(Approx(leer.x_) == 0.0);
REQUIRE(Approx(leer.y_) == 0.0);
REQUIRE(Approx(full.x_) == 5.8664);
REQUIRE(Approx(full.y_) == 8.002);
}

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
REQUIRE(Approx(full.x_) == 10.6);
REQUIRE(Approx(full.y_) == 16.0);
float multifloat2 = 0.0f;
Vec2 full1(5.8, 8.0);
full1 *= multifloat2;
REQUIRE(Approx(full.x_) == 0.0);
REQUIRE(Approx(full.y_) == 0.0);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
