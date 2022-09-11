#pragma once
#include <iostream>

class Context;

class State
{
public:
  virtual ~State() {}

  void SetContext(Context* newContext) {
    context = newContext;
  }

  virtual void Lock() = 0;
  virtual void Play() = 0;
  virtual void Pause() = 0;
  virtual void Next() = 0;

protected:
  Context* context;
};

class LockedState : public State {
  public:
    void Lock() override;
    void Play() override {} //Locked
    void Pause() override {} //Locked
    void Next() override {} //Locked
};

class PlayingState : public State {
  public:
    void Lock() override;
    void Play() override;
    void Pause() override;
    void Next() override;
};

class PausedState : public State {
  public:
    void Lock() override;
    void Play() override;
    void Pause() override {}
    void Next() override;
};