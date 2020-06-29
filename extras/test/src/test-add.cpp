#include <catch.hpp>

#include <add.h>

TEST_CASE( "Both operands are 0", "[test-add-01]" )
{
  REQUIRE(add(0,0) == 0);
}

TEST_CASE( "Operand a > 0", "[test-add-02]" )
{
  REQUIRE(add(0,1) == 1);
}
