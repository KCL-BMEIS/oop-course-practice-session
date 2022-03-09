#ifndef LEFT_VENTRICLE_H_INCLUDED
#define LEFT_VENTRICLE_H_INCLUDED

#include <vector>
#include <string>
#include "segment.h"

class LeftVentricle
{
public:
    LeftVentricle () { }
    LeftVentricle (const std::string& filename) { load (filename); }
    void load (const std::string& filename);
    double get_std_dev_TTP_displacement () const;

private:
    double time_resolution;
    std::vector<Segment> segments;
};

#endif // LEFT_VENTRICLE_H_INCLUDED
