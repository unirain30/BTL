#include "ThuVien.h"

void chon(List l){
	int i;
	menu();
	scanf("%d", &i);
	while(i > 10){
		printf("Khong co lua chon. Moi ban nhap lai: \n");
		menu();
		scanf("%d", &i);
	}
	while(i <= 9){
		if(i == 1){
			docfile(l);
			inlist(l);
		}
		if(i == 2){
			int o;
			printf("Chon vi tri muon them sach: \n");
			menu_themsach();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_themsach();
				scanf("%d", &o);
			}
			if(o == 1){
				themdau(l);
				inlist(l);
			}
			if(o == 2){
				themcuoi(l);
				inlist(l);
			}
			if(o == 3){
				thembatki(l);
				inlist(l);
			}
		}
		if(i == 3){
			int o;
			printf("Tim sach theo: \n");
			menu_timsach();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai:\n");
				menu_timsach();
				scanf("%d", &o);
			}
			if(o == 1){
				timsach_ma(l);
			}
			if(o == 2){
				timsach_tensach(l);
			}
			if(o == 3){
				timsach_tentg(l);
			}
		}
		if(i == 4){
			suasach(l);
			inlist(l);
		}
		if(i == 5){
			int o;
			printf("Chon cach xoa sach: \n");
			menu_xoasach();
			scanf("%d", &o);
			while(o > 3){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_xoasach();
				scanf("%d", &o);
			}
			if(o == 1){
				xoasach_dau(l);
				inlist(l);
			}
			if(o == 2){
				xoasach_cuoi(l);
				inlist(l);
			}
			if(o == 3){
				xoasach_vitri(l);
				inlist(l);
			}
		}
		if(i == 6){
			int o;
			printf("Chon cach sap xep: \n");
			menu_sapxep();
			scanf("%d", &o);
			while(o > 8){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_sapxep();
				scanf("%d", &o);
			}
			if(o == 1){
				sapxep_matang(l);
				inlist(l);
			}
			if(o == 2){
				sapxep_magiam(l);
				inlist(l);
			}
			if(o == 3){
				sapxep_tentang(l);
				inlist(l);
			}
			if(o == 4){
				sapxep_tengiam(l);
				inlist(l);
			}
			if(o == 5){
				sapxep_tentgtang(l);
				inlist(l);
			}
			if(o == 6){
				sapxep_tentggiam(l);
				inlist(l);
			}
			if(o == 7){
				sapxep_namtang(l);
				inlist(l);
			}
			if(o == 8){
				sapxep_namgiam(l);
				inlist(l);
			}
		}
		if(i == 7){
			luufile(l);
		}
		if(i == 8){
			int o;
			printf("Chon option: \n");
			menu_khac();
			scanf("%d", &o);
			while(o > 2){
				printf("Khong co lua chon. Moi ban nhap lai: \n");
				menu_khac();
				scanf("%d", &o);
			}
			if(o == 1){
				demdanhsach(l);
			}
			if(o == 2){
				kiemtra_list(l);
			}
		}
		if(i == 9){
			listtest();
		}
		menu();
		scanf("%d", &i);
	}
	if(i == 10){
		return;
	}
}
