#include <stdio.h>
#include<conio.h>
int main()
{
    int n, place;
    scanf("%d %d", &n, &place);
    float scores[n];
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &scores[i]);
        if (scores[i] != 0)
        {
            if (scores[i] > scores[place])
                Count++;
        }
    }
    printf("%d ", Count);
    getch();
}
