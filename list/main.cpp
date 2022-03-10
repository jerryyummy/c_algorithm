#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
template<class T>
struct LinkNode
{
    T data;
    struct LinkNode *next;

};

template<class T>
class Linklist{
private:
    struct LinkNode<T> *header1,*header2;
public:
    Linklist(){
        header1=new LinkNode<T>;
        header2=new LinkNode<T>;
        header1->next=NULL;
        header2->next=NULL;
    }
    void Find(struct LinkNode<T> *header,T element){
        struct LinkNode<T> * temp=new LinkNode<T>;
        temp=header;
        int pos=1,tag=0;
        while (temp->next!=NULL){
            temp=temp->next;
            if (temp->data==element){
                tag=1;//找到元素
                break;
            }
            pos++;
        }
        if (tag)
            cout <<pos <<endl;
        else
            cout << -1 <<endl;
    };
    int getlength(struct LinkNode<T> *header){
      int length=0;
        struct LinkNode<T> * temp=new LinkNode<T>;
        temp=header;
        while (temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    };
    struct LinkNode<T>* getHead1(){
        return header1;
    };
    struct LinkNode<T>* getHead2(){
        return header2;
    };
    void createListFromKey(int n){
        struct LinkNode<T> * node=new LinkNode<T>;
        node=header1;
        for (int i = 0; i < n; ++i) {
            T element;
            printf("please input a element\n");
            cin >> element ;
            insertLinkList1(element);
        }
    };
    void createOrderList(){
        vector<T> array;
        struct LinkNode<T> *node=header1;
        for (int i = 0; i < getlength(header1); ++i) {
            node=node->next;
            array.push_back(node->data);
        }
        sort(array.begin(),array.end());;
        node=header2;
        for (int i = 0; i < array.size(); ++i) {
            insertLinkList2(array[i]);
        }
    };
    void insertLinkList1(T element){

        struct LinkNode<T> * node=new LinkNode<T>;
        node=header1;
        struct LinkNode<T>* temp = new LinkNode<T>;
        temp->data=element;
        temp->next=NULL;
        for (int i = 0; i < getlength(header1); ++i) {
            node=node->next;
        }
        node->next=temp;

    };
    void insertLinkList2(T element){
//        struct LinkNode<T> * node=(struct LinkNode<T>*)malloc(sizeof(struct LinkNode<T>));
        struct LinkNode<T> * node=new LinkNode<T>;
        node=header2;
//        struct LinkNode<T> * temp=(struct LinkNode<T>*)malloc(sizeof(struct LinkNode<T>));
        struct LinkNode<T>* temp = new LinkNode<T>;
        temp->data=element;
        for (int i = 0; i < getlength(header2); ++i) {
            node=node->next;
        }
        node->next=temp;
        temp->next=NULL;

    };

    void saveData(){
        std::ofstream outfile("D:\\Clion\\list\\Test.txt",ios::app);
        if (outfile.fail()){
            cout <<"error!" <<endl;
        }
        struct LinkNode<T> * temp=(struct LinkNode<T>*)malloc(sizeof(struct LinkNode<T>));
        temp=header2;
        for (int i = 0; i < getlength(header2); ++i) {
            temp=temp->next;
            outfile << temp->data <<endl;
        }

        outfile.close();
    };
    void createListFromFile(){
        fstream infile("D:\\Clion\\list\\data.txt", ios::in);
        if (!infile)
        {
            cout << "error" << endl;
            exit(1);
        }
        T element;
        while (!infile.eof())
        {
            infile >> element;
            if (element == "")
                continue;
            insertLinkList1(element);
        }
        infile.close();
    };
    void printList(struct LinkNode<T> *header){
        struct LinkNode<T> * temp=header;
        while (temp!=NULL){
            cout << temp->data <<endl;
            temp=temp->next;
        }
    }
    void test(){
        int choice1;
        T element;
        printf("1.create a list from file 2.create a list from key\n");
        cin >> choice1;
        switch (choice1) {
            case 1:
                createListFromFile();
                int choice2;
                printf("1.create a sorted list and print it\n2.save it to a file\n");
                cin >> choice2;
                switch (choice2) {
                    case 1:
                        createOrderList();
                        printList(header2);
                        printf("give the element you want to find\n");
                        cin >> element;
                        Find(header1,element);
                        break;
                    case 2:
                        createOrderList();
                        saveData();
                        printf("give the element you want to find\n");
                        cin >> element;
                        Find(header1,element);
                        break;
                }
                break;
            case 2:
                createListFromKey(3);
                int choice3;
                printf("1.create a sorted list and print it\n2.save it to a file\n");
                cin >> choice3;
                switch (choice3) {
                    case 1:
                        createOrderList();
                        printList(header2);
                        printf("give the element you want to find\n");
                        cin >> element;
                        Find(header1,element);
                        break;
                    case 2:
                        createOrderList();
                        saveData();
                        printf("give the element you want to find\n");
                        cin >> element;
                        Find(header1,element);
                        break;
                }
                break;
        }

    };

};

int main() {
    Linklist<string> *list=new Linklist<string>();
    list->test();
    return 0;
}
