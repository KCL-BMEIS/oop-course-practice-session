#ifndef LEFT_VENTRICLE_H_INCLUDED
#define LEFT_VENTRICLE_H_INCLUDED

#include <vector>
#include "segment.h"

class LeftVentricle
{
public:

private:
    double time_resolution;
    std::vector<Segment> segments;
};

#endif // LEFT_VENTRICLE_H_INCLUDED
