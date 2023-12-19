#include <stdio.h>

int main()
{
    int n=7;
    int rows;
    int pos;
    int num;
    int x;
    
    for(rows=1;rows<=n;rows++)
    {
        x=n+1-rows;
        num=rows;
        
        for(pos=1;pos<=n*2;pos++)
        {
            if(pos == x && num>0)
            {
                printf("%d",rows);
                x=x+2;
                num=num-1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
