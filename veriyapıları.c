#include<stdio.h>
#include<stdlib.h>
// stdlib haf�zada yer a�ma
typdef struct n{
	int x;
	n next;
};


int main(){
    node root;
    //pointera yer a�mak i�in malloc kulland�k
    //next bir sonraki dataya ve pointera eri�meyi sa�lar
    root = (node)malloc(sizeof(node));
    root -> x = 10;
    root -> next = (node )malloc(sizeof(node));
    root -> next -> x = 20;
    //iter kavram� pointerlar�n ve datalar� gezer tek bir yere sabitte kalabilir
    node iter;
    iter=root;
    printf("%d",iter -> x);
    iter = iter ->next;
    printf("%d",iter -> x);
    return 0;
}

