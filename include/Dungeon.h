#ifndef DUNGEON_H
#define DUNGEON_H

#include <cstddef>

#define DEFAULT_LENGTH (20)
#define DEFAULT WIDTH (20)
#define ROOM_WIDTH_MAX (4)
#define ROOM_LENGTH_MAX (4)

class Dungeon
{
public:
    Dungeon();
    Dungeon(std::size_t length, std::size_t width);
    ~Dungeon();

private:
    class room_t
    {
    public:
    private:
    }

    void gen();
    makeRoom();
}

#endif /* DUNGEON_H */
