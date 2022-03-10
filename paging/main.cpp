#include<stdio.h>
int main() {
    int p[10][10];
    int page[20][2];
    int memory;
    int pagsize;
    int numofp;
    int i,j,k;
    int count=0;
    int no ,pagenumber, offset;
    printf("Enter the memory size -- ");
    scanf("%d", &memory);
    printf("Enter the page size -- ");
    scanf("%d", &pagsize);
    printf("The no. of pages available in memory are -- %d\n", memory / pagsize);
    printf("Enter number of processes -- ");
    scanf("%d", &numofp);
    for (i = 0; i < numofp; i++) {
        printf("Enter no.of pages required for p[%d]--", i);
        scanf("%d", &k);
        if (memory / pagsize - count > k){
            printf("Enter pagetable for p[%d]--", i);
            for (j = 0; j < k; j++) {
                scanf("%d", &p[i][j]);
                count++;
            }
        } else {
            printf("\nMemory is Full\n"); break;
        }
    }
    printf("Enter process no. and pagenumber and offset -- ");
    scanf("%d %d %d", &no, &pagenumber, &offset);
    printf("The Physical Address is --%d", p[no][pagenumber] * 100 + offset);

}