#include <stdio.h>
#include <conio.h>
void inBoi7(int n) {
	// Kiểm tra n có phải là bội của 7 hay không
	if (n % 7 == 0) {
		// In ra n
		printf("%d ", n);
	}
}

int main() {
	// Duyệt từ 10 đến 99
	for (int i = 10; i <= 99; i++) {
		// Gọi hàm inBoi7 với tham số i
		inBoi7(i);
	}
	printf("\nLe Thanh Ky Nguyen");
	_getch();
	return 0;
}