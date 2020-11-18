#include "ThuVien.h"

int kiemtrama(LIST l, int ma){
   for(NODE *p = l.head; p != NULL; p = p->next){
      if( ma == p->data.ma){
         printf("Bi trung ma sach. Moi ban nhap lai!\n");
         return 1;
      }
   }
   return 0;
}

void nhapsach(LIST l ,SACH &a){
   printf("Nhap ma sach: ");
   scanf("%d", &a.ma);
   int h;
   h = kiemtrama(l, a.ma);
   while(h == 1){
      scanf("%d", &a.ma);
      h = kiemtrama(l, a.ma);
      if(h == 0){
         continue;
      }
   }
   printf("Nhap ten sach: ");
   fflush(stdin);
   fgets(a.tensach, sizeof(a.tensach), stdin);
   a.tensach[strlen(a.tensach) - 1] = '\0';
   printf("Nhap ten tac gia: ");
   fflush(stdin);
   fgets(a.tentacgia, sizeof(a.tentacgia), stdin);
   a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
   printf("Nhap nam san xuat: ");
   scanf("%d", &a.namsanxuat);
   printf("\n");
}
