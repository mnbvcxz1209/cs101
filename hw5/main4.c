#include <stdio.h>

int main()
{
    int i=12345;
    
    int unit=i/1%10;
    int ten=i/10%10;
    int hundred=i/100%10;
    int thousand=i/1000%10;
    int upper=i/10000;
    
    printf("switch result=%d",upper*10000+unit*1000+hundred*100+ten*10+thousand);

    return 0;
}
