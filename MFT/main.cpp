#include <iostream>
struct Process{
    int memory;
    std::string isAllocated;
    int fragment;
};
int main() {
    int total,block,number,availableBlock,Internal=0,External;
    std::cout << "Enter the total memory available (in Bytes) --";
    std::cin >> total;
    External=total;
    std::cout << "Enter the block size (in Bytes)--";
    std::cin >> block;
    std::cout << "Enter the number of processes-- ";
    std::cin >> number;
    std::cout <<"No.of blocks available in memory";
    std::cin>> availableBlock;
    int temp=availableBlock;
    struct Process *process=new struct Process[number];
    for (int i = 0; i < number; ++i) {
        printf("Enter memory required for process %d(in Bytes)--",i+1);
        std::cin >> process[i].memory;
        if (process[i].memory<=block&&availableBlock>0){
            process[i].isAllocated="true";
            process[i].fragment=block-process[i].memory;
            Internal+=process[i].fragment;
            External-=block;
            availableBlock--;
        } else{
            process[i].isAllocated= "false";
            process[i].fragment=-1;
        }
    }
    std::cout << "PROCESS\tMEMORY REQUIRED\tALLOCATED\tINTERNAL FRAGMENTATION" << std::endl;
    for (int i = 0; i < number; ++i) {
        if (temp==0){
            printf("Memory is Full, Remaining Processes cannot be accommodated\n");
            break;
        }
        if (process[i].isAllocated=="true"){
            temp--;
            printf("%d\t\t",i+1);
            printf("%d\t  ",process[i].memory);
            printf("true\t\t\t");
            std::cout <<process[i].fragment <<std::endl;
            availableBlock--;
        } else{
            printf("%d\t\t",i+1);
            printf("%d\t  ",process[i].memory);
            printf("false\t\t\t");
            std::cout <<process[i].fragment <<std::endl;
        }
    }
    printf("Total Internal Fragmentation is %d\n",Internal);
    printf("Total External Fragmentation is %d",External);
    return 0;
}
