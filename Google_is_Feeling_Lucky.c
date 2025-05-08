#include <stdio.h>
#include <stdlib.h>

//Define a structure to save website information
struct website
{
    char websiteName[100];
    int relevance;
};

//Define a global array of structures to save website information
struct website info[10];

// Function prototypes
void getWebsiteInfo()
{
    for(int i = 0; i < 10; i++)
    {
        scanf("%s%d", info[i].websiteName, &info[i].relevance);
    }
}

// Function to find the maximum relevance value among the websites
int findMaxRelevance()
{
    int maxRelevance= 0;
    for(int i = 0; i < 10; i++)
    {
        if(info[i].relevance > maxRelevance)
        {
            maxRelevance = info[i].relevance;
        }
    }
    return maxRelevance;
}

// Function to print the names of websites with the maximum relevance value
void printMaxRelevanceWebsites(int maxRelevance)
{
    for(int i = 0; i < 10; i++)
    {
        if(info[i].relevance == maxRelevance)
        {
            printf("%s\n", info[i].websiteName);
        }
    }
}

int main(){
    int testCases;//How many test cases to run
    scanf("%d", &testCases);
    for(int i = 1; i <= testCases; i++)
    {
        getWebsiteInfo();// Get the website information for each test case
        int maxRelevance = findMaxRelevance();// Find the maximum relevance value
        printf("Case #%d:\n", i);
        printMaxRelevanceWebsites(maxRelevance);// Print the websites with maximum relevance
    }
    return 0;
}