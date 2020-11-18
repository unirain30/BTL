#include "ThuVien.h"

void timsach_ma(List l){
	int ma;
	printf("Nhap ma sach can tim: ");
	scanf("%d", &ma);
	for(int i = 0; i < l.last; i++){
		if(l.data[i].masach == ma){
			printf("Sach tim thay tai vi tri %d\n", i+1);
   		printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			insach(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
			return;
		}
	}
	printf("Khong co sach can tim!\n");
}

void timsach_tensach(List l){
	char ten[60];
	printf("Nhap ten sach can tim: ");
	fflush(stdin);
	fgets(ten, sizeof(ten), stdin);
	ten[strlen(ten) - 1] = '\0';
	for(int i = 0; i < l.last; i++){
		if( strcmp(l.data[i].tensach,ten) == 0){
			printf("Sach tim thay tai vi tri %d\n", i+1);
		   printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			insach(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
			return;
		}
	}
	printf("Khong co sach can tim!\n");
}

void timsach_tentg(List l){
	char ten[60];
	int d=0;
	printf("Nhap ten sach can tim: ");
	fflush(stdin);
	fgets(ten, sizeof(ten), stdin);
	ten[strlen(ten) - 1] = '\0';
	for(int i = 0; i < l.last; i++){
		if( strcmp(l.data[i].tentacgia,ten) == 0){
			d++;
			printf("Sach tim thay tai vi tri %d\n", i+1);
		   printf("\n--------------------------------Danh sach--------------------------------\n");
   		printf(" Ma Sach");
   		printf("       Ten Sach");
   		printf("           Ten tac gia");
   		printf("               Nam san xuat\n");
			insach(l.data[i]);
			printf("\n------------------------------Het danh sach------------------------------\n");
			printf("\n");
		}
	}
	if(d == 0){
		printf("Khong co sach can tim!\n");
	}
}
