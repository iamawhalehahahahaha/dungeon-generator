#ifndef DUNGEON_GEN_H
#define DUNGEON_GEN_H

#include <cstddef>

#define DEFAULT_LENGTH (20)
#define DEFAULT WIDTH (20)

class Dungeon
{
public:
    Dungeon();
    Dungeon(std::size_t length, std::size_t width);
    ~Dungeon();
private:
    class room_t
    {
    
    }
    void gen();
    makeRoom();
}
#endif /* DUNGEON_GEN_H */
