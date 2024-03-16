// #include "test.hpp" //this doesnt work, with or without make file
#include "test.hpp" // this doesnt work with make file, but compiles program,
// running: clang++ -g -Wall -std=c++11 main.cpp

const int FLAG_To_STOP = -1;
int main(int argc, char const *argv[])
{
  std::vector<test> test_V;
  int numbers = 0;

  std::cout << "type a list of numbers to be sorted" << std::endl;
  while (std::cin >> numbers &&
         numbers != FLAG_To_STOP)
  {
    test_V.emplace_back(numbers);
  }

  std::cout << "List of numbers :\n";
  for (test &t : test_V)
  {
    std::cout << t.get_num() << " ";
  }
  std::cout << std::endl;

  return 0;
}
