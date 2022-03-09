#ifndef LEFT_VENTRICLE_H_INCLUDED
#define LEFT_VENTRICLE_H_INCLUDED

#include <vector>
#include <string>
#include "segment.h"

class LeftVentricle
{
public:
    void load (const std::string& filename);

private:
    double time_resolution;
    std::vector<Segment> segments;
};

#endif // LEFT_VENTRICLE_H_INCLUDED
