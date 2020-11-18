#include "ThuVien.h"

void doc_file(FILE *file, SACH &a, int i){
   fscanf(file, "%7d", &a.ma);
   printf("  %-13d", a.ma);
   fgets(a.tensach, sizeof(a.tensach), file);
   fgets(a.tensach, sizeof(a.tensach), file);
   a.tensach[strlen(a.tensach) - 1] = '\0';
   printf("%-20s", a.tensach);
   fgets(a.tentacgia, sizeof(a.tentacgia), file);
   a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
   printf("%-30s", a.tentacgia);
   fscanf(file, "%d", &a.namsanxuat);
   printf("%-7d", a.namsanxuat);
   printf("\n");
}

void docfile_luu(LIST &l, int &d){
   FILE *file;
   int i=1;
   printf("\n--------------------------------Danh sach--------------------------------\n");
   printf(" Ma Sach");
   printf("       Ten Sach");
   printf("           Ten tac gia");
   printf("               Nam san xuat\n");
   file = fopen("DS.txt","r");
   while(!feof(file)){
      SACH a;
      doc_file(file, a, i);
      NODE *p = taonode(a);
      themcuoi_taolist(l, p);
      i++;
      d++;
   }
   printf("\n------------------------------Het danh sach------------------------------\n");
   printf("\n");
   fclose(file);
}
