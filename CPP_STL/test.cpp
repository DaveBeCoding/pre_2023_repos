#include "test.hpp"
#include <iostream>

test::test(int x) : x_(x)
{
  // for (auto &fill : vect_) {

  // }
}

int test::get_num() { return x_; };

test::~test() {}