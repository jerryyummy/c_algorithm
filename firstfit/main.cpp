#include <iostream>
struct Block{
    int isAvailable;
    int size;
};
struct File{
    int size;
    int position=-1;
    int fragment=-1;
};
int main() {
    int blocks,files;
    std::cout << "Enter the number of blocks:" ;
    std::cin >> blocks;
    std::cout << "Enter the number of files:";
    std::cin >> files;
    struct Block *block=new struct Block[blocks];
    struct File *file=new struct File[files];
    std::cout << "Enter the size of the blocks:"<<std::endl;
    for (int i = 0; i < blocks; ++i) {
        printf("Block%d: ",i+1);
        std::cin >> block[i].size;
        block[i].isAvailable=0;
    }
    for (int i = 0; i < files; ++i) {
        printf("File%d: ",i+1);
        std::cin >> file[i].size;
        for (int j = 0; j < blocks; ++j) {
            if (file[i].size<=block[j].size&&!block[j].isAvailable){
                file[i].position=j;
                block[j].isAvailable=1;
                file[i].fragment=block[j].size-file[i].size;
                break;
            }
        }
    }
    std::cout << "File No\tFile Size\tBlock No\tBlock Size\tFragment" <<std::endl;
    for (int i = 0; i < files; ++i) {
        printf("%d\t\t",i+1);
        printf("%d\t\t",file[i].size);
        printf("%d\t\t",file[i].position+1);
        printf("%d\t\t",block[file[i].position].size);
        printf("%d\n",file[i].fragment);
    }
    return 0;
}
