#include "state.h"
#include "context.h"

void LockedState::Lock() {
  if (context->IsPlaying()) {
    context->PlayingSong();
    context->TransitionTo(new PlayingState());
  }
  else {
    context->TransitionTo(new PausedState());
  }
}

//------------------------------------------------------

void PlayingState::Lock() {
  context->LockingPlayer();
  context->TransitionTo(new LockedState());
}

void PlayingState::Play() {
  context->PausingSong();
  context->TransitionTo(new PausedState());
}

void PlayingState::Pause() {
  context->PausingSong();
  context->TransitionTo(new PausedState());
}

void PlayingState::Next() {
  context->NextSongInList();
}

//------------------------------------------------------

void PausedState::Lock() {
  context->LockingPlayer();
  context->TransitionTo(new LockedState());
}

void PausedState::Play() {
  context->PlayingSong();
  context->TransitionTo(new PlayingState());
}

void PausedState::Next() {
  context->NextSongInList();
}

//------------------------------------------------------