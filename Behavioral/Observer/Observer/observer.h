#include <string>

class IObserver {
  public:
    virtual ~IObserver() {};
    virtual void Update(std::string& newMessage) = 0;
};

class Observer : public IObserver {
  public:
    Observer(int id);
    virtual ~Observer() {};
    void Update(std::string& newMessage) override;

    void ShowMessage();

  private:
    int id;
    std::string message;
};