#include "ThuVien.h"

void insach(Sach a){
	printf("  %-13d", a.masach);
	printf("%-20s", a.tensach);
	printf("%-30s", a.tentacgia);
	printf("%-7d\n", a.namsanxuat);
}

void inlist(List l){
   printf("\n--------------------------------Danh sach--------------------------------\n");
   printf(" Ma Sach");
   printf("       Ten Sach");
   printf("           Ten tac gia");
   printf("               Nam san xuat\n");
	for(int i = 0; i < l.last; i++){
		insach(l.data[i]);
	}
   printf("\n------------------------------Het danh sach------------------------------\n");
	printf("\n");
}
