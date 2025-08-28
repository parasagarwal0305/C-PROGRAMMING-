// #include<stdio.h>
// int main()
// {
//     int i , sum=0;
//     for(i=1;i<=10;i++)
//     sum+=i;
//     printf("%d",sum);
//     return 0;
// }
///////////////// second program /////////////////
#include<stdio.h>
int main()
{
    int i,count, sum=0;
    for(i=10;i<=70;i++)
    {
     if(i%2!=0)
     {
     count+=1;
     
        if(count<=12)
        {
        sum+=i;
    }
}


}
printf("%d",sum);
}