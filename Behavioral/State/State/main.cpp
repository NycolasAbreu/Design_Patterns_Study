#include <iostream>
#include "state.h"
#include "context.h"

int main()
{
	Context* player = new Context(new PausedState);
	player->StartSong();
	player->NextSong();
	player->StopSong();
	player->LockPlayer();
	player->StartSong(); // Cant play because is locked
}

//OUTPUT
//Context: Transition to class PausedState.
//Playing Song
//Context : Transition to class PlayingState.
//Next Song
//Pausing Song
//Context : Transition to class PausedState.
//LockingP layer
//Context : Transition to class LockedState.