#include "O4ered2.h"
#include <iostream>

int O4ered2::first_el()
{
	double a;
	a = sredn_garmoni4();
	o4* tmp = get_O4ered_prot();
	int flag = 0;
	int fin = run(tmp, &flag, a);
	if (fin == XYZ)
	{
		std::cout << "Net shansov" << std::endl;
		return XYZ;
	}
	else
	{
		return fin;
	}
}

int O4ered2::run(o4* tmp, int* flag, double sr_g)
{
	if (tmp->prev_el != 0)
	{
		int x;
		x = run(tmp->prev_el, flag, sr_g);
		if (x == XYZ)
		{
			if (tmp->el > sr_g)
			{
				return tmp->el;
			}
		}
		else
		{
			return x;
		}
	}
	else
	{
		*flag = 1;
		if (tmp->el != EMPT)
		{
			if (tmp->el > sr_g)
			{
				return tmp->el;
			}
		}
	}
	return XYZ;
}

double O4ered2::sredn_garmoni4()
{
	o4* tmp = get_O4ered_prot();
	double summ = 0;
	if (tmp->prev_el != 0)
	{
		summ = 1 / double(tmp->el);
		summ = summ + sum(tmp->prev_el);
	}
	else
	{
		if (tmp->el != EMPT)
		{
			summ += 1 / double(tmp->el);
		}
	}
	return get_cnt_prot() / summ;
}
double O4ered2::sum(o4* tmp)
{
	double summ = 0;
	if (tmp->prev_el != 0)
	{
		summ = 1 / double(tmp->el);
		summ = summ + sum(tmp->prev_el);

	}
	else
	{
		if (tmp->el != EMPT)
		{
			summ += 1 / double(tmp->el);
		}
	}

	return summ;
}


void O4ered2::ToFusion(O4ered2* sec, O4ered2* fin)
{
	return fusion(sec, fin);
}
void  O4ered2::ToCopy(O4ered2* to)
{
	return copy(to);
}
void  O4ered2::toAddEl(int a)
{
	return add_el(a);
}
void  O4ered2::toRmEl()
{
	return rm_el();
}
void  O4ered2::toList()
{
	return list();
}