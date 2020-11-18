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
	List test;
	taolist(test);
	for(int i=1; i<=1000; i++){
		Sach a;
		int masach = rand() % 1000;
		int namsx = rand() % 1000;
		a.masach = masach;
		randomname(ten);
		strcpy(a.tensach,ten);
		randomname(tentg);
		strcpy(a.tentacgia,tentg);
		a.namsanxuat = namsx;
		themsach_list(test, a);
	}
	clock_t start = clock();
	sapxep_matang(test);
	clock_t end = clock();
	double timeused = ((double) (end - start));
	inlist(test);
	printf("Thoi gian thuc hien sap xep: %f \n\n", timeused);
}
