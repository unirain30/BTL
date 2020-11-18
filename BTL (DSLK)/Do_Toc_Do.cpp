#include "ThuVien.h"

void randomname(char* ten){
	char* box = "ABCDEFGHIKLMNOPQRSTUVWXYZabcdefghiklmnopqrstuvwxyz0123456789";
	int boxLegth = strlen(box);
	for(int i=0; i<=4; i++){
		ten[i] = box[rand() % (boxLegth - 1)];
	}
	ten[5] = '\0';
}

void listtest(){
	char ten[60];
	char tentg[60];
	LIST test;
	khoitao(test);
	for(int i=1; i<=1000; i++){
		SACH a;
		int masach = rand() % 1000;
		int namsx = rand() % 1000;
		a.ma = masach;
		randomname(ten);
		strcpy(a.tensach,ten);
		randomname(tentg);
		strcpy(a.tentacgia,tentg);
		a.namsanxuat = namsx;
		NODE *p = taonode(a);
		themcuoi_test(test, p);
	}
	clock_t start = clock();
	sapxep_ma_tang(test);
	clock_t end = clock();
	double timeused = ((double) (end - start));
	in(test);
	printf("Thoi gian thuc hien sap xep: %f \n\n", timeused);
}
