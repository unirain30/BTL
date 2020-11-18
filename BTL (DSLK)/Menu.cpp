#include "ThuVien.h"

void menu_tim_sach(){
      printf("Ban muon tim theo ?\n");
      printf("1. Tim theo ma sach.\n");
      printf("2. Tim theo ten sach.\n");
      printf("3. Tim theo ten tac gia.\n\n");
}

void menu(){
   printf("1. Nap DS sach tu file text.\n");
   printf("2. Them sach.\n");
   printf("3. Tim sach.\n");
   printf("4. Sua thong tin sach.\n");
   printf("5. Xoa sach.\n");
   printf("6. Sap xep DS.\n");
   printf("7. Luu DS.\n");
   printf("8. Chon option khac.\n");
   printf("9. Do toc do.\n");
   printf("10. Thoat.\n\n");
}

void menu_xoa(){
   printf("Ban muon xoa phan tu o vi tri: \n");
   printf("1. Vi tri dau.\n");
   printf("2. Vi tri cuoi.\n");
   printf("3. Vi tri bat ki.\n\n");
}

void menu_sapxep(){
   printf("Ban muon sap xep theo ?\n");
   printf("1. Sap xep theo ma sach.\n");
   printf("2. Sap xep theo ten sach.\n");
   printf("3. Sap xep theo ten tac gia.\n");
   printf("4. Sap xep theo nam san xuat.\n\n");
}

void menu_sapxep_ma(){
   printf("Chon cach sap xep: \n");
   printf("1. Sap xep theo ma sach tang dan.\n");
   printf("2. Sap xep theo ma sach giam dan.\n\n");
}

void menu_sapxep_namsx(){
   printf("Chon cach sap xep: \n");
   printf("1. Sap xep theo nam san xuat tang dan.\n");
   printf("2. Sap xep theo nam san xuat giam dan.\n\n");
}

void menu_sapxep_tensach(){
   printf("Chon cach sap xep: \n");
   printf("1. Sap xep theo ten sach tang dan.\n");
   printf("2. Sap xep theo ten sach giam dan.\n");
   printf("\n");
}

void menu_sapxep_tentg(){
   printf("Chon cach sap xep: \n");
   printf("1. Sap xep theo ten tac gia tang dan.\n");
   printf("2. Sap xep theo ten tac gia giam dan.\n");  
   printf("\n"); 
}

void menu_themsach(){
   printf("Chon vi tri can them: \n");
   printf("1. Them vao dau danh sach.\n");
   printf("2. Them vao cuoi danh sach.\n");
   printf("3. Them vao vi tri bat ki trong danh sach.\n");
   printf("\n");
}

void menu_optionkhac(){
   printf("1. Dem so sach trong danh sach.\n");
   printf("2. Kiem tra danh sach rong khong.\n");
   printf("\n");
}
