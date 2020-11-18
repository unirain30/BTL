#include "ThuVien.h"

int kiemtramasach(List l, int ma){
	for(int i = 0; i < l.last; i++){
		if(l.data[i].masach == ma){
			printf("Trung ma sach. Moi ban nhap lai.\n");
			return 1;
		}
	}
	return 0;
}
