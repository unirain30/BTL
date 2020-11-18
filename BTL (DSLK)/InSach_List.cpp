#include "ThuVien.h"

void insach(SACH sach){
   printf("  %-13d", sach.ma);
   printf("%-20s", sach.tensach);
   printf("%-30s", sach.tentacgia);
   printf("%-7d", sach.namsanxuat);
   printf("\n");
}

void in(LIST l){
   int d=1;
   printf("\n--------------------------------Danh sach--------------------------------\n");
   printf(" Ma Sach");
   printf("       Ten Sach");
   printf("           Ten tac gia");
   printf("               Nam san xuat\n");
   for(NODE *p = l.head; p != NULL; p = p->next){
      insach(p->data);
      d++;
   }
   printf("\n------------------------------Het danh sach------------------------------\n");
   printf("\n");
}
