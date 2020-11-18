#include "ThuVien.h"

void sapxep_ma_tang(LIST &l){
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         if(k->data.ma < p->data.ma){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_ma_giam(LIST &l){
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         if(k->data.ma > p->data.ma){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_nam_giam(LIST &l){
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         if(k->data.namsanxuat > p->data.namsanxuat){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_nam_tang(LIST &l){
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         if(k->data.namsanxuat < p->data.namsanxuat){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_tensach_tang(LIST &l){
   int i=0;
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         i = strcmp(p->data.tensach, k->data.tensach);
         if(i>0){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_tensach_giam(LIST &l){
   int i=0;
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         i = strcmp(p->data.tensach, k->data.tensach);
         if(i<0){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_tentg_giam(LIST &l){
   int i=0;
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         i = strcmp(p->data.tentacgia, k->data.tentacgia);
         if(i<0){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}

void sapxep_tentg_tang(LIST &l){
   int i=0;
   for(NODE *p = l.head; p != NULL; p = p->next){
      for(NODE *k = p->next; k != NULL; k = k->next){
         i = strcmp(p->data.tentacgia, k->data.tentacgia);
         if(i>0){
            SACH a = k->data;
            k->data = p->data;
            p->data = a;
         }
      }
   }
}
