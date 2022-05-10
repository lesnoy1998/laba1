#pragma once
#include "o4ered.h"
class O4ered1 :
    public O4ered
{
private:
    double sum(o4* tmp);
    int run(o4* tmp, int *flag, double sr_g);
public:
    double sredn_garmoni4();
    int first_el();
};

