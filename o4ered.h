#pragma once
#define EMPT -1
#define XYZ -51

struct o4 { //односвязный список элементов очереди
	int el = EMPT;
	struct o4* prev_el = 0;
};

class O4ered
{
private:
	int cnt; //количество элементов очереди
	o4* o4ered = 0;
	void add_el(int a, o4* mem_o4); //рекурсия, отвечающая за добавление элемента
	int rm_el(o4* mem_o4); //рекурсия, отвечающая за удаление элемента
	void list(o4* mem_o4); //рекурсия, отвечающая за вывод элемента на экран
	void copy(o4* st, o4* fin); //рекурсия копирования
	void fusion(O4ered* fin, o4* sec);
public:

	o4* get_O4ered_pub();

	O4ered();
	~O4ered();
	void add_el(int a); //добавление элемента
	void rm_el(); //удаление элемента
	void list(); //вывод элемента на экран
	void copy(O4ered* fin); //копирование
	void obnulyay(O4ered *fin);
	void fusion(O4ered* sec, O4ered* fin);
protected:

	o4* get_O4ered_prot();
	int get_cnt_prot();

};

