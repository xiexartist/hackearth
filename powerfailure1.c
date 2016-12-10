

    #include <stdio.h>
    int p[100005],a[100005],b[100005];
    create(int n)
    {
        int i,j;
        for(i=2; i<n; i++)
        {
            if(a[i]==1)
            {
                p[i]=p[i-1];
                continue;
            }
            p[i]=p[i-1]+1;
            j=i+i;
            while(j<=n)
            {
                a[j]=1;
                j+=i;
            }
        }
    }
    merge(int *t,int *a, int low, int high)
    {
        int mid=(low+high)/2;
        int i=low,j=mid+1,k=low;
        while(i<=mid&&j<=high)
        {
            if(a[i]>=a[j])
                t[k++]=a[i++];
            else
                t[k++]=a[j++];
        }
        while(i<=mid)
            t[k++]=a[i++];
        while(j<=high)
            t[k++]=a[j++];
     
        for(i=low; i<=high; i++)
            a[i]=t[i];
    }
    sort(int *a,int *t,int low,int high)
    {
        if(low<high)
        {
            int mid=(low+high)/2;
            sort(a,t,low,mid);
            sort(a,t,mid+1,high);
            merge(t,a,low,high);
        }
    }
     
    int main()
    {
        int t,T[100005],n,m,i;
        create(100005);
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d%d",&n,&m);
            for(i=0; i<n; i++)
                scanf("%d",&b[i]);
            sort(b,T,0,n-1);
            if(b[0]>m)
                printf("0\n");
            else
            {
                long long ans=1;
                for(i=0; i<n; i++)
                {
                    int x=m-b[i]+1-i;
                    x=x-(p[m]-p[b[i]-1]);
                printf("%d ",x);
                    ans=(ans*x)%1000000007;
                }
                printf("%lld\n",ans);
            }
        }
        return 0;
    }


