#include <iostream>
#include "left_ventricle.h"

using namespace std;

int main (int argc, const char* argv[])
{
    if (argc < 2)
        throw std::runtime_error ("incorrect usage: first argument should be name of file");

    LeftVentricle LV (argv[1]);
    std::cerr << "std dev of TTP displacements = " << LV.get_std_dev_TTP_displacement() << std::endl;

    return 0;
}
