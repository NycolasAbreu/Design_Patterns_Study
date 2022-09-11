#pragma once
#include <iostream>
#include "context.h"

class State
{
  public:
    virtual ~State() {}

    void set_context(Context* context) {
      context = context;
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
    void Lock() override {
      if (context->IsPlaying()) {
        context->StartSong();
        context->TransitionTo(new PlayingState());
      }
      else {
        context->TransitionTo(new PausedState());
      }
    }

    void Play() override {} //Locked
    void Pause() override {} //Locked
    void Next() override {} //Locked
};

class PlayingState : public State {
  public:
    void Lock() override {
      context->TransitionTo(new LockedState());
    }

    void Play() override {
      context->StopSong();
      context->TransitionTo(new PausedState());
    }

    void Pause() override {
      context->StopSong();
      context->TransitionTo(new PausedState());
    }

    void Next() override {
      context->NextSong();
    }
};

class PausedState : public State {
  public:
    void Lock() override {
      context->TransitionTo(new LockedState());
    }

    void Play() override {
      context->StartSong();
      context->TransitionTo(new PlayingState());
    }

    void Pause() override {}

    void Next() override {
      context->NextSong();
    }
};