Q119: 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int sum = 0, expectedSum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    expectedSum = (n - 1) * (n - 2) / 2; 
    printf("%d", sum - expectedSum);

    return 0;
}
