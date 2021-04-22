// N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고 그 합이 최대인 자연수를 출력하기
#include <stdio.h>
using namespace std;

int digit_sum(int num) {
    int tmp, sum = 0;
    while (num > 0) {
        tmp = num % 10;
        sum += tmp;
        num = num / 10;
    }
    return sum;
}

int main() {
    int n, num, i, sum, max = -214900000, res;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;
        } else if (sum == max) {
            if (num > res) res = num;
        }
    }
    printf("%d\n", res);
    return 0;
}