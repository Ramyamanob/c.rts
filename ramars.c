#include<stdio.h>
int main()
    {
        int p,q,r,sum=0,i,j,t1,t2;
        scanf("%d%d",&p,&q);
        for(i=p+1;i<q;i++)
        {
            sum=0;
            t2=i;
            
            
            while(t2!=0)
            {
                r=t2%10;
                sum=sum+r*r*r;
                t2=t2/10;
            }
            if(sum==i)
            {
                printf("%d ",i);
            }
            
        }
        return 0;
    }    
