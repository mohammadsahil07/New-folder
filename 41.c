#include<stdio.h>
int main()
{
    float h=50, ts=5600, c=0.7;
    float h1,ts1,c1;
    printf("please enter the hardness  ");
    scanf("%f",&h1);
    printf("please enter the carbon content  ");
    scanf("%f",&ts1);
    printf("please enter the tensile strength  ");
    scanf("%f",&c1);

    if(h1>h&&c1<c&&ts1>ts){printf("ths is grade 10 steel");}
    else if(h1>h&&c1<c){printf("ths is grade 9 steel");}
    else if(ts1>ts&&c1<c){printf("ths is grade 8 steel");}
    else if(h1>h&&ts1>ts){printf("ths is grade 7 steel");}
    else if(h1>h||c1<c||ts1>ts){printf("ths is grade 6 steel");}
    else{printf("ths is grade 5 steel");}

return 0;
}