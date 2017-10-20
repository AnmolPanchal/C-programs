#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],b[10],c[20],n1,n2,i,j,temp,k=0;
    clrscr();

    printf(" Enter the no. of element for 1st array : ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++,k++)
    {
        printf(" Enter element [%d] : ",i+1);
        scanf("%d",&a[i]);
        c[k]=a[i];
    }

    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\n After sorting 1st array : ");
    for(i=0;i<n1;i++)
    {
        printf("\n Element [%d] = %d",i+1,a[i]);
    }


    printf("\n\n Enter the no. of element for 2nd array :  ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++,k++)
    {
        printf(" Enter element [%d] : ",i+1);
        scanf("%d",&b[i]);
        c[k]=b[i];
    }
    for(i=0;i<n2;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    printf("\n After sorting 2nd array : ");
    for(i=0;i<n2;i++)
    {
        printf("\n Element [%d] = %d",i+1,b[i]);
    }
    for(i=0;i<n1+n2;i++)
    {
        for(j=i+1;j<n1+n2;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    printf("\n\n\n After combined and sorted both array :- ");
    for(i=0;i<n1+n2;i++)
    {
        printf("\n Element [%d] = %d",i+1,c[i]);
    }
    getch();

    return 0;
}