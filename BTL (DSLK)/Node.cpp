#include "ThuVien.h"

NODE* taonode(SACH x){
   NODE *p = new NODE;
   if(p == NULL){
      return NULL;
   }
   else{
      p->data = x;
      p->next = NULL;
   }
   return p;
}
