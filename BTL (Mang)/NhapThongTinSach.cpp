#include "ThuVien.h"

void nhapthongtinsach(List l, Sach &a){
	int ma, h;
	printf("Nhap ma sach: ");
	scanf("%d", &ma);
	h = kiemtramasach(l, ma);
	while(h == 1){
		scanf("%d", &ma);
		h = kiemtramasach(l, ma);
		if(h == 0){
			continue;
		}
	}
	a.masach = ma;
	printf("Nhap ten sach: ");
	fflush(stdin);
	fgets(a.tensach, sizeof(a.tensach), stdin);
	a.tensach[strlen(a.tensach) - 1] = '\0';
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	fgets(a.tentacgia, sizeof(a.tentacgia), stdin);
	a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
	printf("Nhap nam san xuat: ");
	scanf("%d", &a.namsanxuat);
	printf("\n");
}
