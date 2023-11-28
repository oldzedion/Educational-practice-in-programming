#include <stdio.h>


#define MOD 12345

int main() {
    int n;

    // 3��������� ������� �����
    printf("Enter the length of the sequence: ");
    scanf_s("%d", &n);

    // �������� ���������� �����
    if (n < 1 || n > 10000) {
        printf("Invalid value entered");
        return 0;
    }

    // �������� ��������
    int dp[10001] = { 0, 2, 4, 7 };

    // ���������� ������� �������
    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    // ��������� ����������
    printf("Number of searched sequences: %d\n", dp[n]);
}