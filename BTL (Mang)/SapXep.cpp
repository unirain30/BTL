#include "ThuVien.h"

void sapxep_matang(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].masach < l.data[i].masach){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_magiam(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].masach > l.data[i].masach){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_namtang(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].namsanxuat < l.data[i].namsanxuat){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_namgiam(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if(l.data[j].namsanxuat > l.data[i].namsanxuat){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentang(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tensach, l.data[i].tensach) > 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tengiam(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tensach, l.data[i].tensach) < 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentgtang(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tentacgia, l.data[i].tentacgia) > 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}

void sapxep_tentggiam(List &l){
	Sach a;
	for(int i = 0; i < l.last; i++){
		for(int j = i+1; j < l.last; j++){
			if( strcmp(l.data[j].tentacgia, l.data[i].tentacgia) < 0){
				a = l.data[j];
				l.data[j] = l.data[i];
				l.data[i] = a;
			}
		}
	}
}
