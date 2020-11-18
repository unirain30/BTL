#include "ThuVien.h"

void themsach_list(List &l, Sach a){
	l.data[l.last] = a;
	l.last++;
}
