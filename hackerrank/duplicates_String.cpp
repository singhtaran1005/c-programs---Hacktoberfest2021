//finding duplicates in a string(Using hash table)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char a[] = "finding";
    int h[26];
    for (i = 0; a[i] != '\0'; i++)
    {
        h[a[i] - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (h[i] > 1)
        {
            printf("%c", i + 97);
            printf("\n");
            printf("%d", h[i]);
        }
    }
    return 0;
}