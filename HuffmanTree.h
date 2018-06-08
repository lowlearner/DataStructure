#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

//�������״̬����
#define  TRUE                 1
#define  FALSE                0
#define   OK                  1
#define  ERROR                0
#define  INFEASIBLE           -1
#define  OVERFLOW             -2
typedef  int Status;
typedef unsigned long UInt32;
typedef struct {
     UInt32 weight;             // �ڵ�Ȩ��
     int parent,lchild,rchild;  // ˫�׺����Һ��ӽڵ��±�
}HTNode,*HuffmanTree,*HTree;

typedef char**HuffmanCode;      //��������������



void zip(const char*s);
void rezip(const char*s);
void Select(HuffmanTree T,int n,int&l,int&r);
void StrCopy(char*str,const char*c); 
void HuffmanCoding(HuffmanTree &HT,HuffmanCode &HC,int *w,int n);
void PrintHuffmanCode(HuffmanCode C,int* s,int n);
Status Rewin(HuffmanTree &T,char*s,int*x,int n,int &m);



