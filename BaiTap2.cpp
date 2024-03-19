#include <stdio.h>
#include <math.h>
#include <conio.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(double n) {
	int sqrtN = sqrt(n);
	return sqrtN * sqrtN == n;
}

// Hàm đếm số chính phương
int countPerfectSquares(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (isPerfectSquare(i)) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	printf("Nhap so n: ");
	scanf_s("%d", &n);


	// Đếm số lượng số chính phương
	int count = countPerfectSquares(n);

	// In ra các số chính phương
	printf("Cac so chinh phuong nho hon %d la: \n", n);
	for (int i = 1; i <= n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}

	printf("\nSo luong so chinh phuong la: %d", count);
	printf("\nLe Thanh Ky Nguyen");
	_getch();
	return 0;
}