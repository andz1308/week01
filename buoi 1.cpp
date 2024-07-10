#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//bai6
//int tinhtuoi(char *gender) {
//	if (strcmp(gender, "nam") == 0) {
//		return 62;
//	}
//	else if (strcmp(gender, "nữ") == 0) {
//		return 60;
//	}
//	else {
//		return -1; 
//	}
//}
//
//int main() {
//	int current_year;
//	char ho_ten[100], ngay_sinh[11], gioi_tinh[5];
//	struct tm ngay_sinh_tm;
//	time_t current_time;
//	int tuoi_hien_tai, tuoi_nghi_huu;
//	int nam_nghi_huu, thang_nghi_huu;
//	time(&current_time);
//	current_year = localtime(&current_time)->tm_year + 1900;
//	printf("Nhập họ và tên: ");
//	fgets(ho_ten, sizeof(ho_ten), stdin);
//	ho_ten[strcspn(ho_ten, "\n")] = '\0'; 
//	printf("Nhập ngày sinh (dd/mm/yyyy): ");
//	fgets(ngay_sinh, sizeof(ngay_sinh), stdin);
//	ngay_sinh[strcspn(ngay_sinh, "\n")] = '\0'; 
//	printf("Nhập giới tính (nam/nữ): ");
//	fgets(gioi_tinh, sizeof(gioi_tinh), stdin);
//	gioi_tinh[strcspn(gioi_tinh, "\n")] = '\0'; 
//	if ((ngay_sinh, "%d/%m/%Y", &ngay_sinh_tm) == NULL) {
//		printf("Lỗi: Định dạng ngày sinh không hợp lệ.\n");
//		return 1;
//	}
//	tuoi_hien_tai = current_year - (ngay_sinh_tm.tm_year + 1900);
//	if ((18 <= tuoi_hien_tai && tuoi_hien_tai <= 60 && strcmp(gioi_tinh, "nữ") == 0) ||
//		(18 <= tuoi_hien_tai && tuoi_hien_tai <= 62 && strcmp(gioi_tinh, "nam") == 0)) {
//		tuoi_nghi_huu = tinhtuoi(gioi_tinh);
//		nam_nghi_huu = current_year + (tuoi_nghi_huu - tuoi_hien_tai);
//		thang_nghi_huu = ngay_sinh_tm.tm_mon + 1; 
//
//		printf("Thời gian được nghỉ hưu là tháng %02d/%d.\n", thang_nghi_huu, nam_nghi_huu);
//	}
//	else {
//		if (strcmp(gioi_tinh, "nam") != 0 && strcmp(gioi_tinh, "nữ") != 0) {
//			printf("Lỗi: Giới tính không hợp lệ. Giới tính phải là 'nam' hoặc 'nữ'.\n");
//		}
//		else {
//			printf("Lỗi: Tuổi không nằm trong khoảng cho phép (18 đến 60 hoặc 62 tùy theo giới tính).\n");
//		}
//	}
//
//	return 0;
//}

 //bai5
//void main()
//{
//	int a, b, c;
//	printf_s("nhap 3 so nguyen a,b,c : \n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	float t = (float)c / (a - b);
//	printf_s("t = %2f\n", t);
//}

//bai7
//void nhapM1C_SoNguyen(int * &a, int &n)
//{ //a và n là tham chiếu vì sau khi nhập giá trị, a và n cần giữ các giá trị mới nhận trong hàm
//	n = 10;
//	a = (int *)malloc(n*sizeof(int)); // cấp phát a co 10 phần tử
//	for (int i = 0; i < n; i++)
//		*(a + i) = rand() % 100;
//}
//void xuatM1C_SoNguyen(int *a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %x", i, *(a + i), a + i);
//		printf("\nPhan tu thu %d co gia tri %d va dia chi o nho la %x", i, a[i], a + i);
//	}
//}
//void main()
//{
//	int *a, n = 0;
//	nhapM1C_SoNguyen(a, n);
//	xuatM1C_SoNguyen(a, n);
//}