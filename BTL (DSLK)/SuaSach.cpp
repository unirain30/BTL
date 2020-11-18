#include "ThuVien.h"

void SuaThongTin(LIST &l){
	NODE *p = l.head;
   int d=0;
	int ma1;
	char tensach[60], tentacgia[60];
	int nam;
	printf("\nNhap ma sach can sua: ");
	scanf("%d", &ma1);
	while(p!=NULL){
		if(p->data.ma == ma1 ){
         d++;
			printf("\nNhap thong tin moi: \n");
         printf("Nhap ten sach moi: ");
         fflush(stdin);
         fgets(tensach, sizeof(tensach), stdin);
         printf("Nhap ten tac gia moi: ");
         fflush(stdin);
         fgets(tentacgia, sizeof(tentacgia), stdin);
         printf("Nhap nam san xuat moi: ");
         scanf("%d", &nam);
         printf("\n");
         strcpy(p->data.tensach, tensach);
         p->data.tensach[strlen(p->data.tensach) - 1] = '\0';
         strcpy(p->data.tentacgia, tentacgia);
         p->data.tentacgia[strlen(p->data.tentacgia) - 1] = '\0';
			p->data.namsanxuat = nam;
         in(l);
		}
      p = p->next;
	}
   if(d == 0){
      printf("\nKhong co sach can sua !\n");
   }
}
