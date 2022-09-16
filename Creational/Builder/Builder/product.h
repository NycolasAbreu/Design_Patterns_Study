#pragma once

#include <vector>
#include <string>
#include <iostream>

class Product {
  public:

    void ListParts()const {
      std::cout << "Product parts: ";
      for (size_t i = 0; i < parts.size(); i++) {
        if (parts[i] == parts.back()) {
          std::cout << parts[i];
        }
        else {
          std::cout << parts[i] << ", ";
        }
      }
      std::cout << "\n\n";
    }

    std::vector<std::string>& Parts() {
      return parts;
    }

  private:
    std::vector<std::string> parts;
};