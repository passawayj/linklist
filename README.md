# 링크리스트 구조  
#### <아래 링크의 이미지 참조>
https://user-images.githubusercontent.com/58559928/70270776-71f5b100-17e8-11ea-9d0a-9fc809320c5a.png

#### 노드들이 모인 것이 리스트이다. 효율적으로 특정 노드를 찾기위한 구조 중 하나이다. 링크리스트의 노드들은 각각의 노드가 다음의 노드를 알고 있기 때문에 이러한
리스트 구조를 이루고 있는 것이다. 

``` c
typedef struct node { //node 라는 덩어리 선언
   void* dataPtr; // node안에는 dataPtr라는 숫자와 
   struct node* link; // link라는 node형식의 포인터 . link가 가르키는 건 다음자료를 뜻한다. 그런데
            다음 자료의 형태가 node이므로 자료형 선언을 할 때 struct node* link가 되는것.
}NODE; //NODE 선언
```
#### 위와 같이 node형체에 대하여 구조를 만들어준다. 

```c
NODE* createNode(void* itemptr) //이 함수가 node형을 return하는 함수임. 인자는 어떤 형의 포인터를 넣어도 상관없게 void형 포인터!! 
{
   NODE* nodePtr = NULL; //node형 nodeptr을 선언해놈.
   nodePtr = (NODE*)malloc(sizeof(NODE)); //NODE구조체 안에 있는 총요소들의 사이즈를 재서 NODE형으로 형변환해주고 NODEPTR에 넣음
   nodePtr->dataPtr = itemPtr; //숫자엔 itemptr의 주소를 넣어서 
   nodePtr->link = NULL; //다음을 가르킬 노드가 없으니까 null
   return nodePtr; //node형 nodeptr return함.
}
```

```c
NODE* node =NULL;
```
#### 위의 문장이 main의 첫노드가 node1을 가르킨다.


```c
NODE* node1 = createNode(a);
	NODE* node2 = createNode(b);
node1->link = node2;
```
#### 위의 문장으로 연결작업을 시작하는 것이다. main에 node가 node1 가르키고
createNode에 nodePtr이 node1 가르
