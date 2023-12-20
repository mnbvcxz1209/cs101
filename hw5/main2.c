#include <stdio.h>

int main()
{
    double mypi=4.0;
    long calcpi=1;
    int i;
    float sign=1.0;
    
    for (i=1; i<=1000000 && (calcpi>3141594 || calcpi<3141590) ; i++)
    {
        mypi = mypi-sign*4.0/(2*i+1);
        sign = sign*(-1);
        calcpi = (long)(mypi*1000000);
    }
    
    printf("times=%d \tvalue=%7.5f \n",i,mypi);
    
    return 0;
}

