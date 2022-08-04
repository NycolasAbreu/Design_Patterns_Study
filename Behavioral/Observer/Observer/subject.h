#include <list>
#include <string>
#include <memory>

class IObserver;

class ISubject {
  public:
    virtual ~ISubject() {};
    virtual void Attach(std::shared_ptr<IObserver> observer) = 0;
    virtual void Detach(std::shared_ptr<IObserver> observer) = 0;
    virtual void Notify() = 0;
};

class Subject : public ISubject {
  public:
    virtual ~Subject() {};
    void Attach(std::shared_ptr<IObserver> observer) override;
    void Detach(std::shared_ptr<IObserver> observer) override;
    void Notify() override;

    void ChangeMessage(const std::string& newMessage);

  private:
    std::list<std::shared_ptr<IObserver>> observers;
    std::string message = "Default Message";
};