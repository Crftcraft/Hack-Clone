#include "monster.h"

 int calculate_monster_level(int base_level, int level_depth, int player_level)
{
    int monster_level = base_level;

    if (level_depth < base_level)
    {
        monster_level -= 1;
    }
    else if (level_depth > base_level)
    {
        monster_level += (level_depth - base_level) / 5;
    }

    if (player_level > base_level)
    {
        monster_level += (player_level - base_level) / 4;
    }

    int max_level = (base_level * 3) / 2;

    if (monster_level > max_level)
    {
        monster_level = max_level;
    }

    if (monster_level > 49)
    {
        monster_level = 49;
    }

    return monster_level;
}

