#include <stdio.h>
#include <stdlib.h>

// Function to calculate the cycle length for a given number n
int getCycleLength(int n) 
{
    int count = 1;
    while (n != 1) 
    {
        if (n % 2 == 0) 
        {
            n /= 2;
        } else 
        {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main(){
    int testCase1, testCase2;
    while(scanf("%d %d", &testCase1, &testCase2) != EOF)
    {
        printf("%d %d ", testCase1, testCase2);
        // Ensure testCase1 is less than or equal to testCase2
        if(testCase1 > testCase2)
        {
            int temp = testCase1;
            testCase1 = testCase2;
            testCase2 = temp;
        }
        int maxCycleLength = 0;// Initialize maxCycleLength to 0
        for(int i = testCase1; i <= testCase2; i++)
        {

            if(getCycleLength(i) > maxCycleLength)
            {
                maxCycleLength = getCycleLength(i);// Update maxCycleLength if the current cycle length is greater
            }
        }
        printf("%d\n", maxCycleLength);
    }
    return 0;
}