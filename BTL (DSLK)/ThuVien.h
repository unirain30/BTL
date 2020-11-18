#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct Sach{
   int ma;
   char tensach[60];
   char tentacgia[60];
   int namsanxuat;
};
typedef struct Sach SACH;

struct Node{
   SACH data;
   struct Node *next;
};
typedef struct Node NODE;

struct List{
   NODE *head;
   NODE *tail;
};
typedef struct List LIST;

void khoitao(LIST &l);

NODE* taonode(SACH x);

void themcuoi(LIST &l, NODE *p, int &d);

void themcuoi_taolist(LIST &l, NODE *p);

int kiemtrama(LIST l, int ma);

void nhapsach(LIST l ,SACH &a);

void insach(SACH sach);

void in(LIST l);

void SuaThongTin(LIST &l);

void Search_data_ma(int item, LIST l);

void Search_data_tensach(char item[60], LIST l);

void Search_data_tentacgia(char item[60], LIST l);

void DelFirst(List &l, int &d);

void DelLast(List &l, int &d);

void DelAt(LIST l, int i, int &d);

void sapxep_ma_tang(LIST &l);

void sapxep_ma_giam(LIST &l);

void sapxep_nam_giam(LIST &l);

void sapxep_nam_tang(LIST &l);

void sapxep_tensach_tang(LIST &l);

void sapxep_tensach_giam(LIST &l);

void sapxep_tentg_giam(LIST &l);

void sapxep_tentg_tang(LIST &l);

void themsach_dau(LIST &l, NODE *p, int &d);

void themsach_random(LIST &l, NODE *p, int b, int &dem);

void doc_file(FILE *file, SACH &a, int i);

void docfile_luu(LIST &l, int &d);

void ghifile(LIST l);

void kiemtra_listtrong(LIST l);

void menu_tim_sach();

void menu();

void menu_xoa();

void menu_sapxep();

void menu_sapxep_ma();

void menu_sapxep_namsx();

void menu_sapxep_tensach();

void menu_sapxep_tentg();

void menu_themsach();

void menu_optionkhac();

void chon(int n, LIST &l);

void listtest();

void themcuoi_test(LIST &l, NODE *p);

void randomname(char &ten);
