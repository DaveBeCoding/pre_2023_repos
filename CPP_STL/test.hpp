#ifndef _TEST_
#define _TEST_
#include <iostream>

#include <string>
#include <vector>

class test
{
private:
  std::vector<int> vect_;
  int x_;

public:
  test(int x);
  ~test();
  int get_num();
  // void great();

  // not sure how I would call these (below methods) a on a vector object like "vect_" above, or return a function with a vector as a method how we do current in our labs using non-vector/STL stuff.

  // auto get_num() const -> int;
  // auto set_num(std::vector<int>) const -> std::vector<int>;
  // auto sort_num() const -> int;
  // auto contains() const -> std::vector<int>;
};

#endif