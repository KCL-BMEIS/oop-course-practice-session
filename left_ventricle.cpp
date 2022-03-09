#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "left_ventricle.h"

void LeftVentricle::load (const std::string& filename)
{
    std::cerr << "loading data in file \"" << filename << "\"" << std::endl;
    std::ifstream in;
    in.open (filename);
    if (!in)
        throw std::runtime_error ("error opening file \"" + filename + "\"");

    std::string line;
    std::getline (in, line);
    std::istringstream stream (line);
    stream >> time_resolution;

    std::cerr << "time resolution: " << time_resolution << std::endl;

    int num_vals = -1;
    while (in) {
        std::getline (in, line);
        if (!in)
            break;
        std::istringstream stream (line);
        double val;
        std::vector<double> disp;
        while (stream >> val)
            disp.push_back (val);
        if (disp.size() == 0)
            continue;
        if (num_vals < 0)
            num_vals = disp.size();
        else {
            if (num_vals != disp.size())
                throw std::runtime_error ("malformed data in file \"" + filename + "\"");
        }
        segments.push_back (Segment (disp));
    }

    std::cerr << "loaded " << segments.size() << " segments" << std::endl;
}




double LeftVentricle::get_std_dev_TTP_displacement () const
{
    std::vector<double> ttp (segments.size());
    for (unsigned int n = 0; n < ttp.size(); ++n)
        ttp[n] = segments[n].get_index_of_peak_displacement() * time_resolution;

    double sum = 0.0;
    for (unsigned int n = 0; n < ttp.size(); ++n)
        sum += ttp[n];
    double mean = sum / ttp.size();

    sum = 0.0;
    for (unsigned int n = 0; n < ttp.size(); ++n)
        sum += pow (ttp[n] - mean, 2);

    return sqrt (sum / (ttp.size()-1));
}
