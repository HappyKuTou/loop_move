#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char a[20] = {0};
    printf("input a string:");
    scanf("%s", &a);
    n = strlen(a);
    char temp[n];
    strncpy(temp, a, n-3);

    for(i=0; i<n; ++i)
    {
        if(n-3+i < n)
            a[i] = a[n-3+i];
        else
            a[i] = temp[i-3];
    }

    printf("%s\n", a);

    return 0;
}
