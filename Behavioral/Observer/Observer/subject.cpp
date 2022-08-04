#include "subject.h"
#include "observer.h"
#include <memory>

void Subject::Attach(std::shared_ptr<IObserver> observer)
{
  observers.push_back(observer);
}

void Subject::Detach(std::shared_ptr<IObserver> observer)
{
  observers.remove(observer);
}

void Subject::Notify()
{
  for (auto& obs : observers) {
    obs->Update(message);
  }
}

void Subject::ChangeMessage(const std::string& newMessage)
{
  message = newMessage;
  Notify();
}