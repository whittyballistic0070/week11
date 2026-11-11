
#include <stdio.h>
void apply_discount(int* price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        price[i] = price[i] * (100 - percent) / 100;
    }
}
void print_prices(int* price, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }
    printf("\n");
}
int main(void) {
    int price[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;
    printf("할인율(%%)을 입력하시오 : ");
    scanf_s("%d", &percent);
    if (percent < 0 || percent > 100) {
        printf("할인율은 0~100 사이로 입력하세요.\n");
        return 1;
    }
    printf("할인 전 : ");
    print_prices(price, 5);
    apply_discount(price, 5, percent);
    printf("할인 후 : ");
    print_prices(price, 5);
    return 0;
}