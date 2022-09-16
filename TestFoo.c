#include "foo.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(-2, foo(1,2));
  TEST_ASSERT_EQUAL(-1, foo(2,2));
}