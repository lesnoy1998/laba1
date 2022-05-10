#include "O4ered1.h"
#include <iostream>

int O4ered1::first_el()
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

int O4ered1::run(o4* tmp, int* flag, double sr_g)
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

double O4ered1::sredn_garmoni4()
{
	o4* tmp = get_O4ered_prot();
	double summ = 0;
	if (tmp->prev_el != 0)
	{
		summ = 1/double(tmp->el);
		summ = summ + sum(tmp->prev_el);
	}
	else
	{
		if (tmp->el != EMPT)
		{
			summ += 1/double(tmp->el);
		}
	}
	return get_cnt_prot() / summ;
}
double O4ered1::sum(o4* tmp)
{
	double summ = 0;
	if (tmp->prev_el != 0)
	{
		summ = 1/double(tmp->el);
		summ = summ + sum(tmp->prev_el);
		
	}
	else
	{
		if (tmp->el != EMPT)
		{
			summ += 1/double(tmp->el);
		}
	}

	return summ;
}