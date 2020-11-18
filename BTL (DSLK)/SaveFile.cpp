#include "ThuVien.h"

void ghifile(LIST l){
   FILE *file;
   file = fopen("DS.txt","w");
   for(NODE *p = l.head; p != NULL; p = p->next){
      fprintf(file, "%d\n", p->data.ma);
      fputs(p->data.tensach, file);
      fputs("\n", file);
      fputs(p->data.tentacgia, file);
      fputs("\n", file);
      fprintf(file, "%d", p->data.namsanxuat);
      fprintf(file, "\n");
   }
   fclose(file);
}
