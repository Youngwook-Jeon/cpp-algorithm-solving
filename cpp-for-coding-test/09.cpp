// 자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 갯수를 출력
#include <stdio.h>
using namespace std;

// O(n^2) => 타임 리밋
// int get_num_divisors(int n) {
//     int cnt = 0;
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) cnt++;
//     }
//     return cnt;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++) {
//         printf("%d ", get_num_divisors(i));
//     }

//     return 0;
// }
int cnt[50001]; // 전역 변수로 선언 => 배열의 각 값이 0으로 초기화

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j = j + i) {
            cnt[j] += 1;
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", cnt[i]);
    }
    
    return 0;
}