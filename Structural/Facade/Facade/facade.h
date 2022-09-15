#pragma once

#include <string>
#include "api.h"

/* A classe Facade fornece uma interface simples para a l�gica complexa de uma Api/Biblioteca
 * Delegando as solicita��es aos objetos apropriados dentro da Api/Biblioteca.
 * Gerenciando seu ciclo de vida. Protegendo o cliente da complexidade desnecess�ria. */
class Facade {
  public:
    Facade() = default;

    ~Facade() {
      delete api1;
      delete api2;
    }

    // Os m�todos da Facade s�o atalhos para as funcionalidades da Api/Biblioteca
    std::string Operation() {
      std::string result = "Facade initializes Api:\n";
      result += api1->Operation1();
      result += api2->Operation1();
      result += "Facade orders Api to perform the action:\n";
      result += api1->OperationN();
      result += api2->OperationZ();
      return result;
    }

  private:
    Api1* api1 = new Api1;
    Api2* api2 = new Api2;
};
