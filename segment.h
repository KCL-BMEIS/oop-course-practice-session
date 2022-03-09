#ifndef SEGMENT_H_INCLUDED
#define SEGMENT_H_INCLUDED

#include <vector>

class Segment
{
public:
    Segment (const std::vector<double>& disp) : displacement (disp) { }

    int get_index_of_peak_displacement () const;
private:
    std::vector<double> displacement;
};

#endif // SEGMENT_H_INCLUDED
