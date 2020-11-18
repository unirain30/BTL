#include "ThuVien.h"

int main(){
   LIST l;
   khoitao(l);
   int o;
   printf("Chon:\n");
   menu();
   scanf("%d", &o);
   while(o > 10){
      printf("\nKhong co lua chon. Moi ban nhap lai\n");
      menu();
      scanf("%d", &o);
   }
   chon(o, l);
   return 0;
}
