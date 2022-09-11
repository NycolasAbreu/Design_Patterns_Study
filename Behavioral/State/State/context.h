#pragma once
#include "state.h"

class Context {
  public:
    Context(
      State* state
    ) : state(nullptr)
    {
      TransitionTo(state);
    }
    ~Context() {
      delete state;
    }

    void TransitionTo(State* state) {
      std::cout << "Context: Transition to " << typeid(*state).name() << ".\n";
      if (state != nullptr)
        delete state;
      state = state;
      state->set_context(this);
    }

    bool IsPlaying() {
      return true;
    }

    void StopSong() {
      std::cout << "Stopping the Song\n";
    }

    void StartSong() {
      std::cout << "Starting the Song\n";
    }

    void NextSong() {
      std::cout << "Next Song\n";
    }

  private:
    State* state;
};
