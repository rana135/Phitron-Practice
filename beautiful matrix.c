#include<stdio.h>
int main()
{
    int x,y;
    int arr[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j] == 1)
            {
                x=i;
                y=j;
            }
        }
    }

    int row_chan,col_chan,ans;
    if(x>2)
    {
        row_chan=x-2;
    }
    else
    {
        row_chan=2-x;
    }

    if(y>2)
    {
        col_chan=y-2;
    }
    else
    {
        col_chan=2-y;
    }
    ans=row_chan + col_chan;
    printf("%d\n",ans);

    return 0;
}
