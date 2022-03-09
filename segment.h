#ifndef SEGMENT_H_INCLUDED
#define SEGMENT_H_INCLUDED

#include <vector>

class Segment
{
public:
    Segment (const std::vector<double>& disp) : displacement (disp) { }

private:
    std::vector<double> displacement;
};

#endif // SEGMENT_H_INCLUDED
