#include "o4ered1.h"
#include "o4ered2.h"
#include "O4ered3.h"
#include <iostream>
using namespace std;
int main()
{
	int x;
	//O4ered x1, x2, x3;
	

	bool flag = false;
	cout << "kakoy tip o4eredi vi hotite ispolzovat'?\n1-public\n2-private\n3-protected\n";
	cin >> x;
	if (x == 1) {
		O4ered1 x11, x12, x13;
		while (flag == false)
		{
			cout << "vvedite komandu: \n 1-dobavit \n 2-udalit\n 3-pokazat\n 4-naiti perviy element bolshiy sredn garmoni4eskogo\n 5-kopiya\n 6-sliyanie\n 7-vihod" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
				cout << "4to vi hotite dobavit (4islo): ";
				cin >> x;
				x11.add_el(x);
				cout << "\n\nOK!\n ";
				break;
			case 2:
				x11.rm_el();
				cout << "\n\nOK!\n ";
				break;
			case 3:
				cout << "--------------pokazat x11(1), x12(2), x13(3)?-------------\n ";
				cin >> x;
				cout << "-\n-------------------------------------------------------\n ";
				if (x == 1) { x11.list(); }
				else if (x == 2) { x12.list(); }
				else if (x == 3) { x13.list(); }
				break;
			case 4:
				cout << "sr garm = " << x11.sredn_garmoni4() << endl;
				cout << "element = " << x11.first_el() << endl;
				break;
			case 5:
				x11.copy(&x12);
				cout << "skopirovano v x12";
				break;
			case 6:
				x11.fusion(&x12, &x13);
				break;
			case 7:
				flag = true;
				break;
			}
		}
	}
	else if (x == 2) {
		O4ered2 x11, x12, x13;
		while (flag == false)
		{
			cout << "vvedite komandu: \n 1-dobavit \n 2-udalit\n 3-pokazat\n 4-naiti perviy element bolshiy sredn garmoni4eskogo\n 5-kopiya\n 6-sliyanie\n 7-vihod" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
				cout << "4to vi hotite dobavit (4islo): ";
				cin >> x;
				x11.toAddEl(x);
				cout << "\n\nOK!\n ";
				break;
			case 2:
				x11.toRmEl();
				cout << "\n\nOK!\n ";
				break;
			case 3:
				cout << "--------------pokazat x11(1), x12(2), x13(3)?-------------\n ";
				cin >> x;
				cout << "-\n-------------------------------------------------------\n ";
				if (x == 1) { x11.toList(); }
				else if (x == 2) { x12.toList(); }
				else if (x == 3) { x13.toList(); }
				break;
			case 4:
				cout << "sr garm = " << x11.sredn_garmoni4() << endl;
				cout << "element = " << x11.first_el() << endl;
				break;
			case 5:
				x11.ToCopy(&x12);
				cout << "skopirovano v x12";
				break;
			case 6:
				x11.ToFusion(&x12, &x13);
				break;
			case 7:
				flag = true;
				break;
			}
		}
	}
	else if (x == 3) {
		O4ered3 x11, x12, x13;
		while (flag == false)
		{
			cout << "vvedite komandu: \n 1-dobavit \n 2-udalit\n 3-pokazat\n 4-naiti perviy element bolshiy sredn garmoni4eskogo\n 5-kopiya\n 6-sliyanie\n 7-vihod" << endl;
			cin >> x;
			switch (x)
			{
			case 1: 
				cout << "4to vi hotite dobavit (4islo): ";
				cin >> x;
				x11.toAddEl(x);
				cout << "\n\nOK!\n ";
				break;
			case 2:
				x11.toRmEl();
				cout << "\n\nOK!\n ";
				break;
			case 3:
				cout << "--------------pokazat x11(1), x12(2), x13(3)?-------------\n ";
				cin >> x;
				cout << "-\n-------------------------------------------------------\n ";
				if (x == 1){x11.toList();}
				else if (x == 2){x12.toList();}
				else if (x == 3) { x13.toList(); }
				break;
			case 4:
				cout << "sr garm = " << x11.sredn_garmoni4() << endl;
				cout << "element = " << x11.first_el() << endl;
				break;
			case 5:
				x11.ToCopy(&x12);
				cout << "skopirovano v x12";
				break;
			case 6:
				x11.ToFusion(&x12, &x13);
				break;
			case 7:
				flag = true;
				break;
			}
		}
	}
	else
	{
		return 0;
	}

	/*
	x11.add_el(4);
	x11.add_el(5);
	cout << "-----";
	x11.list();
	x11.add_el(6);

	x33.


	x21.toAddEl(4);
	x21.toAddEl(5);
	cout << "-----";
	x21.toList();
	x21.toAddEl(6);

	x21.ToCopy(&x22);




	//x11.fusion(&x12, &x13);

	//x21.ToFusion(&x22, &x23, &x23);

	x21.ToCopy(&x22);

	//x21.ToFusion(&x11, &x13, &x21);





	double a = x11.sredn_garmoni4();

	int xx = x13.first_el();










	cout << "----- garm = " << a << " el = " << xx << endl;
	
	cout << "--" << a;



	cout << "-----";
	x13.list();


	x13.rm_el();
	x13.rm_el();
	cout << "-----";
	cout << "-----";
	cout << "-----";
	cout << "-----";
	cout << "-----";
	x13.list();
	cout << "-----";
	cout << "-----";
	cout << "-----";

	cout << "-----";
	x11.list();
	x11.rm_el();
	cout << "-----";
	x11.list();
	x11.rm_el();
	cout << "-----";
	x11.list();
	x11.rm_el();
	*/
	return 0;
}