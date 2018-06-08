#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

//函数结果状态代码
#define  TRUE                 1
#define  FALSE                0
#define   OK                  1
#define  ERROR                0
#define  INFEASIBLE           -1
#define  OVERFLOW             -2
typedef  int Status;
typedef unsigned long UInt32;
typedef struct {
     UInt32 weight;             // 节点权重
     int parent,lchild,rchild;  // 双亲和左右孩子节点下标
}HTNode,*HuffmanTree,*HTree;

typedef char**HuffmanCode;      //霍夫曼编码类型



void zip(const char*s);
void rezip(const char*s);
void Select(HuffmanTree T,int n,int&l,int&r);
void StrCopy(char*str,const char*c); 
void HuffmanCoding(HuffmanTree &HT,HuffmanCode &HC,int *w,int n);
void PrintHuffmanCode(HuffmanCode C,int* s,int n);
Status Rewin(HuffmanTree &T,char*s,int*x,int n,int &m);



