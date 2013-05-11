typedef struct node* link;
struct node{
		int item;
		link next;
};

link initList(int);
void printList(link);
void findMax(link);
void findMin(link);
void odd_even_list(link);
void switchNode(link,link,link);
link copyList(link);
void freeList(link);
void free5nodes(link);
void freeEvent(link);
