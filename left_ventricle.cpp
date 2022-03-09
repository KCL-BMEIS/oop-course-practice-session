#include <iostream>
#include <fstream>
#include <stdexcept>
#include "left_ventricle.h"

void LeftVentricle::load (const std::string& filename)
{
    std::cerr << "loading data in file \"" << filename << "\"" << std::endl;
    std::ifstream in;
    in.open (filename);
    if (!in)
        throw std::runtime_error ("error opening file \"" + filename + "\"");

    in >> time_resolution;
    std::cerr << "time resolution: " << time_resolution << std::endl;

    for (int seg = 0; seg < 17; ++seg) {
        std::vector<double> disp (20);
        for (int t = 0; t < 20; ++t)
            in >> disp[t];
        segments.push_back (Segment (disp));
    }
    std::cerr << "loaded " << segments.size() << " segments" << std::endl;
}
