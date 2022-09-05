#include <iostream>
#include <vector>
#include "factory.h"
#include "creature.h"

int main()
{
  DragonFactory df;
  GoblinFactory gf;
  std::vector<Creature*> creatures;

  for (int i = 0; i < 100; i++) {
    if (i % 2 == 0) {
      creatures.push_back(df.Spawn());
    }
    else {
      creatures.push_back(gf.Spawn());
    }
  }

  for (auto creature : creatures) {
    auto dragon = dynamic_cast<Dragon*>(creature);
    if (dragon) {
      dragon->Fly();
    }
    else {
      auto goblin = dynamic_cast<Goblin*>(creature);
      goblin->Walk();
    }
  }
}
