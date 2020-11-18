#include "ThuVien.h"

void docsach_file(FILE *file, Sach &a){
	fscanf(file, "%d", &a.masach);
	fgets(a.tensach, sizeof(a.tensach), file);
	fgets(a.tensach, sizeof(a.tensach), file);
	a.tensach[strlen(a.tensach) - 1] = '\0';
	fgets(a.tentacgia, sizeof(a.tentacgia), file);
	a.tentacgia[strlen(a.tentacgia) - 1] = '\0';
	fscanf(file, "%d", &a.namsanxuat);
}

void docfile(List &l){
	FILE *file;
	file = fopen("DS.txt","r");
	while(!feof(file)){
		Sach a;
		docsach_file(file, a);
		themsach_list(l, a);
	}
	fclose(file);
}
