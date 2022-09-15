#pragma once
#include <string>

/* Eh possivel utilizar a api diretamente pelo sua interface ou utilizando as
 * ferramentas disponibilizadas por sua facade */
class Api1 {
  public:
    std::string Operation1() const {
      return "Api1: Ready!\n";
    }

    std::string OperationN() const {
      return "Api1: Go!\n";
    }
};

//Api's podem ser dividades em diversas interfaces
class Api2 {
  public:
    std::string Operation1() const {
      return "Api2: Get ready!\n";
    }

    std::string OperationZ() const {
      return "Api2: Fire!\n";
    }
};