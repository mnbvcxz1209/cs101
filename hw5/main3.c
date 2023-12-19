#include <stdio.h>

int main()
{
    int x=1;
    int y=1;
    int i;
    
    for(i=1;i<=81;i++)
    {
        if(y<=9)
        {
            if(x<9)
            {
                printf("%d*%d=%d\t",y,x,y*x);
                x=x+1;
            }
            else
            {
                printf("%d*%d=%d\n",y,x,y*x);
                y=y+1;
                x=1;
            }
        }
    }

    return 0;
}
