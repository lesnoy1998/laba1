#pragma once
#include "o4ered.h"
class O4ered2 :
    private O4ered
{
private:
    double sum(o4* tmp);
    int run(o4* tmp, int* flag, double sr_g);
public:
    double sredn_garmoni4();
    int first_el();
    void ToFusion(O4ered2* sec, O4ered2* fin);
    void ToCopy(O4ered2* to);
    void toAddEl(int a);
    void toRmEl();
    void toList();
};

