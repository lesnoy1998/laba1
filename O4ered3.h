#pragma once
#include "o4ered.h"
class O4ered3 :
    protected O4ered
{
    private:
        double sum(o4 * tmp);
        int run(o4 * tmp, int* flag, double sr_g);
    public:
        double sredn_garmoni4();
        int first_el();
        void ToFusion(O4ered3 * sec, O4ered3 * fin);
        void ToCopy(O4ered3 * to);
        void toAddEl(int a);
        void toRmEl();
        void toList();
};

