#include <iostream>
#include "left_ventricle.h"

using namespace std;

int main()
{
    LeftVentricle LV;
    std::cerr << __FILE__ << ": " << __LINE__ << std::endl;
    LV.load("radial_motion_aha_pat_01.txt");
    std::cerr << __FILE__ << ": " << __LINE__ << std::endl;

    return 0;
}
