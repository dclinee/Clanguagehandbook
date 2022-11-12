#include <cstdint>

struct Vec2
{
    int64_t x;
    int64_t y;
};

int64_t normSquared(Vec2 v)
{

    return v.x * v.x + v.y * v.y;
}
