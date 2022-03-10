#include <iostream>

void bubble_sort(int array[],int n){//冒泡排序
    for (int i = 1; i < n; ++i) {
        int temp;
        for (int j = i+1; j < n; ++j) {
            if (array[j]<array[i]){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}

void choose_sort(int array[],int n){
    for (int i = 0; i < n-1; ++i) {
        int k=i;
        for (int j = i+1; j < n; ++j) {
            if (array[k]>array[j]){
                k=j;
            }
        }
        if (k!=i){
            int temp=array[i];
            array[i]=array[k];
            array[k]=temp;
        }
    }
}

void insert_sort(int array[],int n){
    for (int i = 1; i < n; ++i) {
        int temp=array[i];
        int j=i-1;
        while (j>=0&&temp<array[j]){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}

void shell(int *array,int gap){
    int temp,j;
    for (int i = gap; i < sizeof(array); ++i) {
        temp=array[i];
        for (j = i-gap;  j>=0 ; j=j-gap) {
            if (array[j]>temp){
                array[j+gap]=array[j];
            } else{
                break;
            }
        }
        array[j+gap]=temp;
    }
}
void shellsort(int *array,int n){
    int increments[]={5,3,1};
    for (int i = 0; i < sizeof(increments); ++i) {
        shell(array,increments[i]);
    }
}

void quicksort(int *array,int left,int right){
    int i=left,j=right;
    int temp=array[left];//基准元素
    while (i<j){
        while (i<j&&array[j]>=temp)//从右往左找一个小于temp的数
            j--;
        if (i<j){
            array[i]=array[j];
            i++;
        }
        while (i<j&&array[i]<temp)//从左往右找一个大于temp的数
            i++;
        if (i<j){
            array[j]=array[i];
            j--;
        }
    }
    array[i]=temp;
    quicksort(array,left,i-1);
    quicksort(array,i+1,right);
}

void adjustHeap(int *arr,int i,int length){
    int temp = arr[i];//先取出当前元素i
    for(int k=i*2+1;k<length;k=k*2+1){//从i结点的左子结点开始，也就是2i+1处开始
        if(k+1<length && arr[k]<arr[k+1]){//如果左子结点小于右子结点，k指向右子结点
            k++;
        }
        if(arr[k] >arr[i]){//如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
            arr[i] = arr[k];
            i = k;
        }else{
            break;
        }
    }
    arr[i] = temp;//将temp值放到最终的位置
}
void heapsort(int *array,int n){
    for (int i = n/2-1; i >=0 ; --i) {//从最后一个非叶子节点开始
        adjustHeap(array,i,n);
    }
    for(int j=n-1;j>0;j--){
        swap(array,0,j);//将堆顶元素与末尾元素进行交换
        adjustHeap(array,0,j);//重新对堆进行调整
    }
}

void radixsort(int *array1,int *array2,int n,int k,int *cnt){
    for (int i = 0,exp=1; i < k; ++i,exp*=10) {//从个位数开始循环
        for (int j = 0; j < 10; ++j) {
            cnt[j]=0;//初始化每个桶
        }
        for (int j = 0; j < n; ++j) {//读取当前数组每个元素
            cnt[(array1[j]/exp)%10]++;//记录本次循环时每个桶的容量
        }
        for (int j = 1; j < 10; ++j) {//建立每个桶元素开始时的索引
            cnt[j]=cnt[j-1]+cnt[j];
        }
        for (int j = n-1; j >=0 ; --j) {//元素按照开始索引分类，用到一个和待排数组一样大临时数组存放数据
            array2[--cnt[(array1[j]/exp)%10]]=array1[j];// 填充一个数据后，自减，以便数据可以填到下一个空位
        }
        for (int j = 0; j < n; ++j) {
            array1[j]=array2[j];
        }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
