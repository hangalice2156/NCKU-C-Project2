#include "room.h"

room::room()
{
    for(int i = 0; i < 30; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            map1[i][j].name = "Trees";
            map1[i][j].walk = 0;

            map1[i][j+15].name = "Trees";
            map1[i][j+15].walk = 0;
        }

        for(int j = 5; j <15; ++j)
        {
            map1[i][j].name = "Grass";
            map1[i][j].walk = 1;
        }
    }
}
