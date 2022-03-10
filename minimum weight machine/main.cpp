#include <iostream>
using namespace std;
int n,m,d;
int array1[100][100];//cij
int array2[100][100];//wij
int cw=0;//当前重量
int cp=0;//当前价值
int bestw=1000000;
int x[100];//存储当前情况每个零件的供货商
int x1[100];//每个部件的供应商
void machine(int t){//搜索第t个零件的情况
    if(t>=n){//零件已经选完
        if(cw<bestw){//如果当前重量更小，更新
            bestw=cw;
            for(int i=0;i<n;i++){
                x1[i]=x[i];
            }
        }
        return;
    }
    for(int i=0;i<m;i++){//遍历每个供货商
        cp+=array1[t][i];//更新当前重量和价值
        cw+=array2[t][i];
        x[t]=i;//第t个零件选择第i个供货商
        if(cp<=d && cw <=bestw){//如果重量和价值满足要求
            machine(t+1);
        }
        cp-=array1[t][i];
        cw-=array2[t][i];
    }
}
int main()
{

    cin >> n >> m >> d;
    memset(x1,0,sizeof(x1));//初始化变量
    memset(x,0,sizeof(x));
    memset(array1,0,sizeof(array1));
    memset(array2,0,sizeof(array2));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> array1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> array2[i][j];
        }
    }
    machine(0);//搜寻第1个零件
    cout << bestw << endl;
    for(int i=0;i<n;i++){
        cout << x1[i]+1 << " ";
    }
    return 0;
}
