#include "ThuVien.h"

void themcuoi_test(LIST &l, NODE *p){
   if(l.head == NULL){
      l.head = l.tail = p;
   }
   else{
      l.tail->next = p;
      l.tail = p;
   }
}

void themcuoi(LIST &l, NODE *p, int &d){
   if(l.head == NULL){
      l.head = l.tail = p;
   }
   else{
      l.tail->next = p;
      l.tail = p;
   }
   d++;
}

void themcuoi_taolist(LIST &l, NODE *p){
   if(l.head == NULL){
      l.head = l.tail = p;
   }
   else{
      l.tail->next = p;
      l.tail = p;
   }
}

void themsach_dau(LIST &l, NODE *p, int &d){
      p->next = l.head;
      l.head = p;
      d++;
}

void themsach_random(LIST &l, NODE *p, int b, int &dem){
   int d=1;
   for(NODE *k = l.head; k != NULL; k = k->next){
      if(d == b){
         p->next = k->next;
         k->next = p;
         dem++;
         return;
      }
      d++;
   }
   printf("Khong co vi tri can them sach !");
}
