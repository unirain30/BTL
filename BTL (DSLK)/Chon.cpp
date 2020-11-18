#include "ThuVien.h"

void chon(int n, LIST &l){
   int dem=0;
   while(n<10){
      if(n == 1){
         docfile_luu(l,dem);
         menu();
         scanf("%d", &n);
      }
      if(n == 2){
         int i;
         menu_themsach();
         scanf("%d", &i);
         printf("\n");
         while(i > 3){
            printf("\nKhong co lua chon. Moi ban nhap lai\n");
            menu_themsach();
            scanf("%d", &i);
            printf("\n");
         }
         if(i == 1){
            SACH a;
            printf("Nhap thong tin sach ban muon them: \n");
            nhapsach(l,a);
            NODE *p = taonode(a);
            themsach_dau(l, p, dem);
            in(l);
         }
         if(i == 2){
            SACH a;
            printf("Nhap thong tin sach ban muon them: \n");
            nhapsach(l,a);
            NODE *p = taonode(a);
            themcuoi(l, p, dem);
            in(l);
         }
         if(i == 3){
            SACH a;
            int b;
            printf("Nhap thong tin sach ban muon them: \n");
            nhapsach(l,a);
            NODE *p = taonode(a);
            printf("Nhap vi tri ban muon them sach: \n");
            scanf("%d", &b);
            themsach_random(l, p, b-1, dem);
            in(l);
         }
         menu();
         scanf("%d", &n);
      }
      if(n == 3){
         int i;
         menu_tim_sach();
         scanf("%d", &i);
         printf("\n");
         while(i > 3){
            printf("\nKhong co lua chon. Moi ban nhap lai\n");
            menu_tim_sach();
            scanf("%d", &i);
            printf("\n");
         }
         if(i == 1){
            int ma;
            printf("Nhap ma can tim: ");
            scanf("%d", &ma);
            Search_data_ma(ma,l);
         }
         if(i == 2){
            char tensachtim[60];
            printf("Nhap ten sach can tim: ");
            fflush(stdin);
            fgets(tensachtim, sizeof(tensachtim), stdin);
            tensachtim[strlen(tensachtim) - 1] = '\0';
            Search_data_tensach(tensachtim, l);
         }
         if(i == 3){
            char tentgtim[60];
            printf("Nhap ten tac gia can tim: ");
            fflush(stdin);
            fgets(tentgtim, sizeof(tentgtim), stdin);
            tentgtim[strlen(tentgtim) - 1] = '\0';
            Search_data_tentacgia(tentgtim, l);
         }         
         
         menu();
         scanf("%d", &n);
      }
      if(n == 4){
         SuaThongTin(l);
         menu();
         scanf("%d", &n);
      }
      if(n == 5){
         int i;
         menu_xoa();
         scanf("%d", &i);
         printf("\n");
         while(i > 3){
            printf("\nKhong co lua chon. Moi ban nhap lai !\n");
            menu_xoa();
            scanf("%d", &i);
            printf("\n");
         }
         if(i == 1){
            DelFirst(l,dem);
            printf("\n");
         }
         if(i == 2){
            DelLast(l,dem);
            printf("\n");
         }
         if(i == 3){
            int h;
            printf("Chon vi tri can xoa: ");
            scanf("%d", &h);
            printf("\n");
            DelAt(l, h-1, dem);
         }
         in(l);
         menu();
         scanf("%d", &n);
      }
      if(n == 6){
         int i;
         menu_sapxep();
         scanf("%d", &i);
         printf("\n");
         while(i > 4){
            printf("\nKhong co lua chon. Moi ban nhap lai !\n");
            menu_sapxep();
            scanf("%d", &i);
            printf("\n");
         }
         printf("\n");
         if(i == 1){
            int o;
            menu_sapxep_ma();
            scanf("%d", &o);
            while(o > 2){
               printf("\nKhong co lua chon. Moi ban nhap lai !\n");
               menu_sapxep_ma();
               scanf("%d", &o);
            }
            if(o == 1){
               sapxep_ma_tang(l);
               in(l);
            }
            else{
               sapxep_ma_giam(l);
               in(l);
            }         
         }
         if(i == 2){
            int o;
            menu_sapxep_tensach();
            scanf("%d", &o);
            while(o > 2){
               printf("\nKhong co lua chon. Moi ban nhap lai !\n");
               menu_sapxep_tensach();
               scanf("%d", &o);
            }
            if(o == 1){
               sapxep_tensach_tang(l);
               in(l);
            }
            else{
               sapxep_tensach_giam(l);
               in(l);
            }
         }
         if(i == 3){
            int o;
            menu_sapxep_tentg();
            scanf("%d", &o);
            while(o > 2){
               printf("\nKhong co lua chon. Moi ban nhap lai !\n");
               menu_sapxep_tentg();
               scanf("%d", &o);
            }
            if(o == 1){
               sapxep_tentg_tang(l);
               in(l);
            }
            else{
               sapxep_tentg_giam(l);
               in(l);
            }
         }
         if(i == 4){
            int o;
            menu_sapxep_namsx();
            scanf("%d", &o);
            while(o > 2){
               printf("\nKhong co lua chon. Moi ban nhap lai !\n");
               menu_sapxep_namsx();
               scanf("%d", &o);
            }
            printf("\n");
            if(o == 1){
               sapxep_nam_tang(l);
               in(l);
            }
            else{
               sapxep_nam_giam(l);
               in(l);
            }
         }
         menu();
         scanf("%d", &n);
      }
      if(n == 7){
         ghifile(l);
         printf("\n");
         menu();
         scanf("%d", &n);
      }
      if(n == 8){
         int o;
         menu_optionkhac();
         scanf("%d", &o);
         printf("\n");
         while(o > 2){
            printf("\nKhong co lua chon. Moi ban nhap lai !\n");
            menu_optionkhac();
            scanf("%d", &o);
            printf("\n");
         }
         if(o == 1){
            printf("Danh sach co %d sach !\n\n", dem);
         }
         if(o == 2){
            kiemtra_listtrong(l);
         }
         menu();
         scanf("%d", &n);
      }
      if(n == 9){
      	listtest();
      	menu();
      	scanf("%d",&n);
		}
   }
   if(n == 10){
      return ;
   }
}
