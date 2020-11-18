#include "ThuVien.h"

void suasach(List &l){
	int ma;
	printf("Nhap ma sach muon sua: ");
	scanf("%d", &ma);
	for(int i = 0; i < l.last; i++){
		if(l.data[i].masach == ma){
			printf("Nhap ten sach moi: ");
			fflush(stdin);
			fgets(l.data[i].tensach, sizeof(l.data[i].tensach), stdin);
			l.data[i].tensach[strlen(l.data[i].tensach) - 1] = '\0';
			printf("Nhap ten tac gia moi: ");
			fflush(stdin);
			fgets(l.data[i].tentacgia, sizeof(l.data[i].tentacgia), stdin);
			l.data[i].tentacgia[strlen(l.data[i].tentacgia) - 1] = '\0';
			printf("Nhap nam san xuat moi: ");
			scanf("%d", &l.data[i].namsanxuat);
			return;
		}
	}
	printf("Khong co sach can sua !\n");
}
