// Jeffrey Diaz
// diazjeff311@csu.fullerton.edu
// @JeffDiaz311
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cout << "Error: Please provide exactly three arguments.\n";
    return 1;
  }

  std::string chosen_protein{arguments.at(1)};
  std::string chosen_bread{arguments.at(2)};
  std::string chosen_condiment{arguments.at(3)};

  std::cout << "Your order: \n"
            << "A " << chosen_protein << " sandwich on " << chosen_bread
            << " with " << chosen_condiment << ".\n";

  return 0;
}