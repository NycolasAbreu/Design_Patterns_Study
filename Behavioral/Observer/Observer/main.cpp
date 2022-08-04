#include <iostream>
#include <memory>
#include "subject.h"
#include "observer.h"

int main()
{
  Subject subject;
  std::shared_ptr<Observer> observer1 = std::make_shared<Observer>(1);
  std::shared_ptr<Observer> observer2 = std::make_shared<Observer>(2);
  std::shared_ptr<Observer> observer3 = std::make_shared<Observer>(3);
  
  subject.Attach(observer1);
  subject.Attach(observer2);
  subject.Attach(observer3);
  subject.Notify();
  observer1->ShowMessage();
  observer2->ShowMessage();
  observer3->ShowMessage();
  std::cout << "\n";
  subject.ChangeMessage("Updated Message");
  subject.Notify();
  observer1->ShowMessage();
  observer2->ShowMessage();
  observer3->ShowMessage();
  std::cout << "\n";
  subject.Detach(observer1);
  subject.Detach(observer2);
  subject.ChangeMessage("New Updated Message");
  subject.Notify();
  observer1->ShowMessage();
  observer2->ShowMessage();
  observer3->ShowMessage();
}