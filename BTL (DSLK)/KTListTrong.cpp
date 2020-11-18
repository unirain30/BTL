#include "ThuVien.h"

void kiemtra_listtrong(LIST l){
   if(l.head == NULL && l.tail == NULL){
      printf("Danh sach dang khong co phan tu nao !\n\n");
   }
   else{
      printf("Danh sach khong bi trong !\n\n");
   }
}
