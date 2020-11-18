#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
	int masach;
	char tensach[60];
	char tentacgia[60];
	int namsanxuat;
}Sach;

typedef struct{
	Sach data[1000];
	int last;
}List;

void taolist(List &l);

void docfile(List &l);

void docsach_file(FILE *file, Sach &a);

void themsach_list(List &l, Sach a);

void chon(List l);

void menu();

void menu_khac();

void kiemtra_list(List l);

void demdanhsach(List l);

void menu_themsach();

void themdau(List &l);

void themcuoi(List &l);

void thembatki(List &l);

void nhapthongtinsach(List l, Sach &a);

int kiemtramasach(List l, int ma);

void insach(Sach a);

void inlist(List l);

void menu_timsach();

void timsach_ma(List l);

void timsach_tensach(List l);

void timsach_tentg(List l);

void suasach(List &l);

void menu_xoasach();

void xoasach_dau(List &l);

void xoasach_cuoi(List &l);

void xoasach_vitri(List &l);

void menu_sapxep();

void sapxep_matang(List &l);

void sapxep_magiam(List &l);

void sapxep_namtang(List &l);

void sapxep_namgiam(List &l);

void sapxep_tentang(List &l);

void sapxep_tengiam(List &l);

void sapxep_tentgtang(List &l);

void sapxep_tentggiam(List &l);

void luufile(List l);

void randomname(char* ten);

void listtest();
