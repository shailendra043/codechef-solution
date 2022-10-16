#include <stdio.h>
int main()
{
    int n, k, t, arr[1000], max = 0, count = 0;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        scanf("%d %d", &n, &k);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] <= 0)
            {
                count++;
                // max = count;
            }
            else if (arr[i] > 0)
            {
                max++;
            }
        }
        if (count >= k)
        {
            printf("NO\n");
        }
        else if (count < k)
        {
            printf("YES\n");
        }
    }

    return 0;
}
