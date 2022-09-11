#pragma once
#include <iostream>
#include <typeinfo>
class State;

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

    void TransitionTo(State* newState) {
      std::cout << "Context: Transition to " << typeid(*newState).name() << ".\n";
      if (state != nullptr) {
        delete state;
      }
      state = newState;
      state->SetContext(this);
    }

    // State Handles
    void StopSong() {
      state->Pause();
    }
    void StartSong() {
      state->Play();
    }
    void NextSong() {
      state->Next();
    }
    void LockPlayer() {
      state->Lock();
    }

    bool IsPlaying() {
      return true;
    }

    void PlayingSong() {
      std::cout << "Playing Song\n";
    }

    void PausingSong() {
      std::cout << "Pausing Song\n";
    }

    void LockingPlayer() {
      std::cout << "Locking Player\n";
    }

    void NextSongInList() {
      std::cout << "Next Song\n";
    }

    void ActualState() {
      std::cout << "State: " << typeid(*state).name() << ".\n";
    }

  private:
    State* state;
};
