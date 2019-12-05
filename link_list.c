typedef struct node { //node ��� ��� ����
   void* dataPtr; // node�ȿ��� dataPtr��� ���ڿ� 
   struct node* link; // link��� node������ ������ . link�� ����Ű�� �� �����ڷḦ ���Ѵ�. �׷���
            ���� �ڷ��� ���°� node�̹Ƿ� �ڷ��� ������ �� �� struct node* link�� �Ǵ°�.
}NODE; //NODE ����

NODE* createNode(void* itemptr) //�� �Լ��� node���� return�ϴ� �Լ���. ���ڴ� � ���� �����͸� �־ ������� void�� ������!! 
{
   NODE* nodePtr = NULL; //node�� nodeptr�� �����س�.
   nodePtr = (NODE*)malloc(sizeof(NODE)); //NODE����ü �ȿ� �ִ� �ѿ�ҵ��� ����� �缭 NODE������ ����ȯ���ְ� NODEPTR�� ����
   nodePtr->dataPtr = itemPtr; //���ڿ� itemptr�� �ּҸ� �־ 
   nodePtr->link = NULL; //������ ����ų ��尡 �����ϱ� null
   return nodePtr; //node�� nodeptr return��.
}



#include <stdio.h>
#include <malloc.h>

#include ��node.h"    // Header file 

int main ()
{
	NODE* node =NULL; // �̰� 1. main�� node�� node1�� ����Ų�ٴ� �ǹ� : ����Ʈ�Ҷ� �̰ɷ� ���� �̾ ����Ʈ�Ұ���.

	int* a = (int*)malloc(sizeof(int)); // �̰� �� �� NULL���ϳĸ� ���ִ� creteNode�� ���ڷ� ���ݾ� a�� �� �� createNode�� ���� void �����Ͷ� int�� �ּҸ� �Ҵ�������ϴ°���.
	int* b = (int*)malloc(sizeof(int));

	*a = 7;
	*b = 75;

	NODE* node1 = createNode(a);
	NODE* node2 = createNode(b);

	//���� �����۾� ����

	node1->link = node2;
	
	node = node1;

	printf("node1 ���� %d \n", *(int*)node->dataPtr);
	printf("node2 ���� %d \n", *(int*)node->link->dataPtr);

	return 0;
}	// main


main�� node�� node1 ����Ű��
createNode�� nodePtr�� node1 ����Ű��
dynamic memory�� node1�� dataPtr�� 7, link�� �״��� ��� �װ��� 75