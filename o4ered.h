#pragma once
#define EMPT -1
#define XYZ -51

struct o4 { //����������� ������ ��������� �������
	int el = EMPT;
	struct o4* prev_el = 0;
};

class O4ered
{
private:
	int cnt; //���������� ��������� �������
	o4* o4ered = 0;
	void add_el(int a, o4* mem_o4); //��������, ���������� �� ���������� ��������
	int rm_el(o4* mem_o4); //��������, ���������� �� �������� ��������
	void list(o4* mem_o4); //��������, ���������� �� ����� �������� �� �����
	void copy(o4* st, o4* fin); //�������� �����������
	void fusion(O4ered* fin, o4* sec);
public:

	o4* get_O4ered_pub();

	O4ered();
	~O4ered();
	void add_el(int a); //���������� ��������
	void rm_el(); //�������� ��������
	void list(); //����� �������� �� �����
	void copy(O4ered* fin); //�����������
	void obnulyay(O4ered *fin);
	void fusion(O4ered* sec, O4ered* fin);
protected:

	o4* get_O4ered_prot();
	int get_cnt_prot();

};

