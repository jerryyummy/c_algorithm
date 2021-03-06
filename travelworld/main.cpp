#include<iostream>
#include<algorithm>
using namespace std;
int city[61][4];
int index = 0;
int m;
int num = 0;
int vis[61];
int pace[61];
void move(int i){

    if(i==m&&index==20){
        num++;
        printf("%d:  ",num);
        for(int j=1;j<=20;j++){
            printf("%d ",pace[j]);
        }
        printf("%d \n",m);
        return;
    }

    if(vis[i])return;

    vis[i]=1;
    pace[++index]=i;

    for(int j=1;j<=3;j++){
        move(city[i][j]);
    }

    vis[i]=0;
    index--;
}
int main(void){

    for(int i=1;i<=20;i++){//输入城市所连接节点
        cin>>city[i][1]>>city[i][2]>>city[i][3];
        sort(city[i]+1,city[i]+4);
    }

    cin>>m;
    memset(vis,0,sizeof vis);
    vis[m]=1;
    pace[++index]=m;
    for(int i=1;i<=3;i++){
        move(city[m][i]);
    }
    return 0;
}