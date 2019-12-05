typedef struct node { //node 라는 덩어리 선언
   void* dataPtr; // node안에는 dataPtr라는 숫자와 
   struct node* link; // link라는 node형식의 포인터 . link가 가르키는 건 다음자료를 뜻한다. 그런데
            다음 자료의 형태가 node이므로 자료형 선언을 할 때 struct node* link가 되는것.
}NODE; //NODE 선언

NODE* createNode(void* itemptr) //이 함수가 node형을 return하는 함수임. 인자는 어떤 형의 포인터를 넣어도 상관없게 void형 포인터!! 
{
   NODE* nodePtr = NULL; //node형 nodeptr을 선언해놈.
   nodePtr = (NODE*)malloc(sizeof(NODE)); //NODE구조체 안에 있는 총요소들의 사이즈를 재서 NODE형으로 형변환해주고 NODEPTR에 넣음
   nodePtr->dataPtr = itemPtr; //숫자엔 itemptr의 주소를 넣어서 
   nodePtr->link = NULL; //다음을 가르킬 노드가 없으니까 null
   return nodePtr; //node형 nodeptr return함.
}



#include <stdio.h>
#include <malloc.h>

#include “node.h"    // Header file 

int main ()
{
	NODE* node =NULL; // 이게 1. main에 node가 node1을 가르킨다는 의미 : 프린트할때 이걸로 쭉쭉 이어서 프린트할거임.

	int* a = (int*)malloc(sizeof(int)); // 이거 왜 걍 NULL안하냐면 좀있다 creteNode에 인자로 들어가잖아 a가 이 때 createNode가 인자 void 포인터라서 int형 주소를 할당해줘야하는거임.
	int* b = (int*)malloc(sizeof(int));

	*a = 7;
	*b = 75;

	NODE* node1 = createNode(a);
	NODE* node2 = createNode(b);

	//이제 연결작업 시작

	node1->link = node2;
	
	node = node1;

	printf("node1 값은 %d \n", *(int*)node->dataPtr);
	printf("node2 값은 %d \n", *(int*)node->link->dataPtr);

	return 0;
}	// main


main에 node가 node1 가르키고
createNode에 nodePtr이 node1 가르키고
dynamic memory에 node1은 dataPtr이 7, link는 그다음 노드 그값은 75