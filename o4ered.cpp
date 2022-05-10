#include "o4ered.h"
#include <iostream>


O4ered::O4ered()
{
	cnt = 0;
	o4ered = 0;
}
O4ered::~O4ered()
{
	if (o4ered == 0)
	{
		return;
	}
	if (cnt == 0)
	{
		delete o4ered;
	}
	while (cnt != 0)
	{
		o4* temp = o4ered;
		o4* temp2 = o4ered;
		for (int i = 0; i < cnt; i++)
		{
			if (temp->prev_el == 0)
			{
				delete temp;
				temp2->prev_el = 0;
				cnt--;
				break;
			}
			temp2 = temp;
			temp = temp->prev_el;
		}
	}
}

void O4ered::add_el(int a)
{
	if (o4ered == 0)
	{
		o4ered = new o4;
	}
	cnt++;
	if (o4ered->el == EMPT)
	{
		o4ered->el = a;
		return;
	}
	else
	{
		int memory = o4ered->el;
		o4ered->el = a;
		if (o4ered->prev_el == 0) { o4ered->prev_el = new o4; }
		
		add_el(memory, o4ered->prev_el);
	}
	
}

void O4ered::add_el(int a, o4* mem_o4)
{
	if (mem_o4->el == EMPT)
	{
		mem_o4->el = a;
		return;
	}
	else
	{
		int memory = mem_o4->el;
		mem_o4->el = a;
		if (mem_o4->prev_el == 0) { mem_o4->prev_el = new o4; }

		add_el(memory, mem_o4->prev_el);
	}

}


void O4ered::rm_el()
{
	if (cnt == 0) { return; }
	if (o4ered == 0)
	{
		o4ered = new o4;
	}
	if (o4ered->el == EMPT)
	{
		return;
	}
	cnt--;
	if (o4ered->prev_el == 0)
	{
		o4ered->el = EMPT;
		return;
	}
	else
	{
		if (rm_el(o4ered->prev_el)) {
			delete o4ered->prev_el;
			o4ered->prev_el = 0;
		};
		return;
	}

}

int O4ered::rm_el(o4* mem_o4)
{
	if (mem_o4->el == EMPT)
	{
		return 0;
	}

	if (mem_o4->prev_el == 0)
	{
		mem_o4->el = EMPT;
		return 1;
	}
	else
	{
		if (rm_el(mem_o4->prev_el)) {
			delete mem_o4->prev_el;
			mem_o4->prev_el = 0;
		};
		return 0;
	}

}
void O4ered::list()
{
	if (cnt == 0) { return; }
	if (o4ered == 0) { return; }
	if (o4ered->el != EMPT)
	{
		std::cout << std::endl << o4ered->el << std::endl;
	}
	if (o4ered->prev_el != 0)
	{
		list(o4ered->prev_el);
	}
	return;
}

void O4ered::list(o4* mem_o4)
{
	{
		if (mem_o4->el != EMPT)
		{
			std::cout << std::endl << mem_o4->el << std::endl;
		}
		if (mem_o4->prev_el != 0)
		{
			list(mem_o4->prev_el);
		}
		return;
	}
}

void O4ered::copy(O4ered* fin)
{
	if (cnt == 0) { return; }
	fin->cnt = cnt;
	if (fin->o4ered == 0) { fin->o4ered = new o4; }
	if ((o4ered->el != EMPT) && (o4ered->prev_el != 0))
	{
		fin->o4ered->el = o4ered->el;
		fin->o4ered->prev_el = new o4;
		copy(o4ered->prev_el, fin->o4ered->prev_el);
	}
	else if ((o4ered->el != EMPT) && (o4ered->prev_el == 0))
	{
		fin->o4ered->el = o4ered->el;
	}
	return;
}

void O4ered::copy(o4* st, o4* fin)
{
	if ((st->el != EMPT) && (st->prev_el != 0))
	{
		fin->el = st->el;
		fin->prev_el = new o4;
		copy(st->prev_el, fin->prev_el);
	}
	else if ((st->el != EMPT) && (st->prev_el == 0))
	{
		fin->el = st->el;
	}
	return;
}

void O4ered::fusion(O4ered* sec, O4ered* fin)
{
	if (fin->cnt != 0)
	{
		obnulyay(fin);
	}
	if (cnt != 0) {
		copy(fin);
	}
	

	if (sec->cnt == 0) { return; }

	if (sec->o4ered->prev_el == 0)
	{
		if (sec->o4ered->el == EMPT)
		{
			return;
		}
		else
		{
			fin->add_el(sec->o4ered->el);
		}
		return;
	}
	else
	{
		fusion(fin, sec->o4ered->prev_el);
		fin->add_el(sec->o4ered->el);
	}



	return;

}

void O4ered::fusion(O4ered* fin, o4* sec)
{
	if (sec->prev_el == 0)
	{
		if (sec->el == EMPT)
		{
			return;
		}
		else
		{
			fin->add_el(sec->el);
		}
		return;
	}
	else
	{
		fusion(fin, sec->prev_el);
		fin->add_el(sec->el);
	}
}



o4* O4ered::get_O4ered_prot()
{
	return o4ered;
}

o4* O4ered::get_O4ered_pub()
{
	return o4ered;
}

int O4ered::get_cnt_prot()
{
	return cnt;
}



void O4ered::obnulyay(O4ered* fin)
{
	while (fin->cnt != 0)
	{
		o4* temp = fin->o4ered;
		o4* temp2 = fin->o4ered;
		for (int i = 0; i < cnt; i++)
		{
			if (temp->prev_el == 0)
			{
				delete temp;
				temp2->prev_el = 0;
				fin->cnt--;
				break;
			}
			temp2 = temp;
			temp = temp->prev_el;
		}
	}
	fin->o4ered = new o4;
	return;
}