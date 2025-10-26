/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    long num;
    int freq[10] = {0};
    int max = 0, digit, result_digit;
    printf("Enter a Number");
    scanf("%ld", &num);
    long temp = num;

	    // Count the frequency of each digit
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Find the maximum frequency and corresponding digit
    for (int i = 9; i >= 0; i--) {
        if (freq[i] >= max) {
            max = freq[i];
            result_digit = i;
        }
    }

    printf("%d", result_digit);
    return 0;
}