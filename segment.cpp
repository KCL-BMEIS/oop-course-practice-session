#include <algorithm>
#include "segment.h"

int Segment::get_index_of_peak_displacement () const
{
    return std::distance (displacement.begin(),
                          std::max_element (displacement.begin(), displacement.end()));
}
