#include<stdio.h>
#define inf 999
    int n;
    int g[10][10];
    int c[10][10];
    int d[10];
    int visit[10];
    int start;
    int mind;
    int nextnode;
    void dijkstra()
        {   for(int i=0;i<n;i++)
            {
                d[i]=c[start][i];
                visit[i]=0;
            }
            d[start]=0;
            visit[start]=1;
            int count=1;
            while(count<n-1)
            {mind=inf;
              for(int i=0;i<n;i++)
                  {
                    if(d[i]<mind && !visit[i])
                    {    mind=d[i];
                         nextnode=i;
                  }
                }
                visit[nextnode]=1;
                for(int k=0;k<n;k++)
                    {for(int i=0;i<n;i++){
                        if(!visit[i])
                        {
                            if(mind+c[nextnode][i]<d[i])
                                d[i]=mind+c[nextnode][i];
                        }
                    }}
                  count++;
            }
            for (int i=0;i<n;i++)
                {
                    if  (i!=start)
                        printf("distance of source to node %d is : %d\n",i,d[i]);
                        
                }

        }
    int main()
    {
        FILE *fp;
        fp=fopen("djk.txt","r");
        if(fp==NULL)
            printf("ERR");
        else    
            fscanf(fp,"%d",&n);
        for(int i=0;i<n;i++)
            {for(int j=0;j<n;j++){

            
                fscanf(fp,"%d",&g[i][j]);  
                if(g[i][j]==0)
                    c[i][j]=inf;
                else
                    c[i][j]=g[i][j];

            }
        }
        printf("Enter source node:\t");
        scanf("%d",&start);
        dijkstra();

        
    }
