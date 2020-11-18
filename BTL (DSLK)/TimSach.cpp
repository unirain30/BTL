#include "ThuVien.h"

void Search_data_ma(int item, LIST l) {
   int pos = 0;
   
   if(l.head==NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   l.tail = l.head;
   while(l.tail!=NULL) {
      if(l.tail->data.ma == item) {
         SACH s;
         s = l.tail->data;
         printf("\nTim thay sach co ma %d tai vi tri %d\n", item, pos+1);
   		printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
         insach(s);
         printf("\n------------------------------Het danh sach------------------------------\n");
         return;
      }
      l.tail = l.tail->next;
      pos++;
   }
   printf("Sach co ma %d khong ton tai trong list\n", item);
}

void Search_data_tensach(char item[60], LIST l) {
   int pos = 0;
   
   if(l.head==NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   l.tail = l.head;
   while(l.tail!=NULL) {
      if( strcmp(l.tail->data.tensach, item) == 0 ) {
         SACH s;
         s = l.tail->data;
         printf("\nTim thay sach co ten %s tai vi tri %d\n", item, pos+1);
         printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
         insach(s);
         printf("\n------------------------------Het danh sach------------------------------\n");
         return;
      }
      l.tail = l.tail->next;
      pos++;
   }
   printf("Sach co ten %s khong ton tai trong list\n", item);
}

void Search_data_tentacgia(char item[60], LIST l) {
   int pos = 0;
   int d=0;
   if(l.head==NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   l.tail = l.head;
   while(l.tail!=NULL) {
      if( strcmp(l.tail->data.tentacgia, item) == 0 ) {
         SACH a;
         a = l.tail->data;
         printf("\nTim thay sach co tac gia %s tai vi tri %d\n", item, pos+1);
         printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
         insach(a);
         printf("\n------------------------------Het danh sach------------------------------\n");
         printf("\n");
         d++;
      }
      l.tail = l.tail->next;
      pos++;
   }
   if(d==0){
      printf("Sach co tac gia %s khong ton tai trong list\n", item);
   }
   else{
      return;
   }
}
