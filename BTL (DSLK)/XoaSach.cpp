#include "ThuVien.h"

void DelFirst(List &l, int &d){
    if(l.head == NULL){
        printf("\nKhong co gi de xoa!");
    }else{
        l.head = l.head->next;
        d--;
    }
}

void DelLast(List &l, int &d){
    if (l.head == NULL || l.head->next == NULL){
         printf("\nKhong co gi de xoa!");
         return ;
    }
    NODE *p = l.head;
    while(p->next->next != NULL){
        p = p->next;
    }
    p->next = p->next->next; 
    d--;
}

void DelAt(LIST l, int i, int &d){
   if(i == 0){
      DelFirst(l, d);
      return ;
   }
   int k=1;
   NODE *p = l.head;
   while(p->next != NULL ){
      if(k!=i){
         p = p->next;
         k++;
         continue;
      }
      if(k==i){
         p->next = p->next->next;
         d--;
         return ;
      }
   }
   printf("Khong co vi tri can xoa !\n");
}
