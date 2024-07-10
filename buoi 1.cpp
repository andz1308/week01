#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define MAX_SIZE 100

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
int* find_max(int a[], int size) {
	if (size <= 0) return NULL;

	int *max_ptr = &a[0];

	for (int i = 1; i < size; ++i) {
		if (a[i] > *max_ptr) {
			max_ptr = &a[i];
		}
	}

	return max_ptr;
}

// Hàm xuất địa chỉ của phần tử chẵn lớn nhất và phần tử lẻ nhỏ nhất
void print_max_even_min_odd(int a[], int size) {
	int *max_even_ptr = NULL;
	int *min_odd_ptr = NULL;

	for (int i = 0; i < size; ++i) {
		if (a[i] % 2 == 0) {
			if (max_even_ptr == NULL || a[i] > *max_even_ptr) {
				max_even_ptr = &a[i];
			}
		}
		else {
			if (min_odd_ptr == NULL || a[i] < *min_odd_ptr) {
				min_odd_ptr = &a[i];
			}
		}
	}

	if (max_even_ptr != NULL) {
		printf("dia chi phan tu lon nhat: %p\n", max_even_ptr);
	}
	else {
		printf("Khong co phan tu chan trong mang\n");
	}

	if (min_odd_ptr != NULL) {
		printf("dia chi cua phan tu nho nhat: %p\n", min_odd_ptr);
	}
	else {
		printf("Khong co phan tu le trong mang.\n");
	}
}

// Hàm xóa phần tử có giá trị 0 khỏi mảng a
int remove_zeros(int a[], int *size) {
	int count_removed = 0;

	for (int i = 0; i < *size; ++i) {
		if (a[i] == 0) {
			for (int j = i; j < *size - 1; ++j) {
				a[j] = a[j + 1];
			}
			*size -= 1;
			count_removed += 1;
			i--; // Xét lại vị trí hiện tại sau khi xóa
		}
	}

	return count_removed;
}

// Hàm thêm phần tử x vào đầu mảng a
void add_element_to_beginning(int a[], int *size, int x) {
	for (int i = *size; i > 0; --i) {
		a[i] = a[i - 1];
	}
	a[0] = x;
	*size += 1;
}

// Hàm kiểm tra xem số có phải là số chính phương hay không
int is_perfect_square(float x) {
	int s = sqrt(x);
	return s * s == x;
}

// Hàm tính tổng các phần tử là số chính phương trong mảng a
int sum_perfect_squares(int a[], int size) {
	int sum = 0;

	for (int i = 0; i < size; ++i) {
		if (is_perfect_square(a[i])) {
			sum += a[i];
		}
	}

	return sum;
}

int is_local_maximum(int a[], int size, int index) {
	if (index >= 0 && index < size) {
		int current_value = a[index];
		int left_value = (index > 0) ? a[index - 1] : current_value - 1;
		int right_value = (index < size - 1) ? a[index + 1] : current_value - 1;

		return current_value > left_value && current_value > right_value;
	}

	return 0;
}

void print_local_maximums(int a[], int size) {
	printf("cac so cuc dai trong bang a: ");
	for (int i = 0; i < size; ++i) {
		if (is_local_maximum(a, size, i)) {
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}

int main()
{
	int a[MAX_SIZE];
	int size;

	// Nhập số phần tử của mảng
	printf("Nhap so mang: ");
	scanf_s("%d", &size);

	// Nhập các phần tử của mảng
	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < size; ++i) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}

	// a. Tìm phần tử lớn nhất và in ra địa chỉ của nó
	int *max_ptr = find_max(a, size);
	if (max_ptr != NULL) {
		printf("phan tu lon nhat trong mang la %d, dia chi cua no la %p\n", *max_ptr, max_ptr);
	}
	else {
		printf("mang rong\n");
	}

	// b. Xuất địa chỉ của phần tử chẵn lớn nhất và phần tử lẻ nhỏ nhất
	print_max_even_min_odd(a, size);

	// c. Xóa phần tử có giá trị 0
	int removed_count = remove_zeros(a, &size);
	printf("da xoa %d ptu co gtri 0 ra khoi mang.\n", removed_count);

	// d. Thêm phần tử x vào đầu mảng
	float x;
	printf("Nhap phan tu x de them vao dau mang: ");
	scanf_s("%f", &x);
	add_element_to_beginning(a, &size, x);
	printf("mang sau khi them phan tu x: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// e. Tính tổng các phần tử là số chính phương
	int sum_square = sum_perfect_squares(a, size);
	printf("tong cac so chinh phuong trong mang la: %d\n", sum_square);

	// f. Xuất các số cực đại trong mảng
	print_local_maximums(a, size);

	return 0;
}