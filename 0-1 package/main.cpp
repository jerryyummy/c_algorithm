#include<iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n;//物品个数
int storage;//背包容量
int value[100];//value of items
int weight[100];//weight of items
int status[100]={0};//statue of items
int bestValue=0;
struct Node{
    int lv;//记录当前节点层数
    int wei;//当前总重量
    int val;//当前总价值
    int status[100];//当前节点的物品状态数组 0/1
};

int branchBound(){
    queue<Node> q;
    Node n1={0,0,0,{0}};
    q.push(n1);
    while (!q.empty()){
        Node nd;
        nd=q.front();
        int lv=nd.lv;//当前第几个，可以作为数组的索引
        if(lv>=n){//如果是最后一层节点
            if(nd.val>bestValue)//如果此方案更优
            {
                bestValue=nd.val;
                for(int i=0;i<n;i++)
                {
                    status[i]=nd.status[i];//改变状态数组
                }
            }
            q.pop();
            continue;//跳出循环
        }
        //判断左孩子节点
        //该节点重量加上 下一个物品
        if(nd.wei+weight[lv]<=storage)
        {
            //构造左孩子节点
            Node left=q.front();
            left.lv+=1;//编号+1
            left.val+=value[lv];
            left.wei+=weight[lv];
            //置左孩子结点的 下一状态位为1
            left.status[lv]=1;
            //将左孩子入队
            q.push(left);
        }
        //构造并加入右孩子节点
        Node right=q.front();
        right.status[lv]=0;
        right.lv+=1;
        q.push(right);
        //将当前访问节点弹出
        q.pop();
    }
    return bestValue;
}

int main()
{
    cin>>n;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&weight[i]);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d",&value[i]);
    }
    cin>>storage;
    bestValue=branchBound();
    for (int i = 0; i < n; ++i) {
        printf("%d ",status[i]);
    }
    printf("\n");
    printf("%d",bestValue);
}
