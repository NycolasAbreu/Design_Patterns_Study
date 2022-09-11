#include <iostream>
#include "state.h"

int main()
{
	Context* player = new Context(new PausedState);
	player->NextSong();
}
