#include <iostream>
#include <string>

class Singleton
{
  public:
    Singleton(Singleton& other) = delete; // Não é possível clonar

    void operator=(const Singleton&) = delete; // Não é possível atribuir a outro objeto

    static Singleton* GetInstance(  // Cria a instância na primeira chamda e depois retorna a instância armazenada
      const std::string& value
    );

    void PrintValue()
    {
      std::cout << Value() << "\n";
    }

    std::string Value() const {
      return value;
    }

  private:
    Singleton(const std::string value) // O construtor do Singleton deve sempre ser privado para evitar
    : value(value)                     // chamadas de construção com o operador `new`.
    {}

    static Singleton* singleton;

    std::string value;
};

Singleton* Singleton::GetInstance(
  const std::string& value
)
{
  if (singleton == nullptr) {
    singleton = new Singleton(value);
  }
  return singleton;
}

Singleton* Singleton::singleton = nullptr;  // Inicializando o Singleton para que seja criado

int main()
{
  Singleton* singleton = Singleton::GetInstance("original");
  Singleton* singleton2 = Singleton::GetInstance("new");   //  Cria mas retorna a instância já criada, sem alterar o valor
  //Singleton* singleton3 = new Singleton();  //  Erro, não é possível criar um novo singleton

                              //Output
  singleton->PrintValue();    //Original
  singleton2->PrintValue();   //Original

  return 0;
}