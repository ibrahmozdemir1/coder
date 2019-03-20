#include<stdio.h>
#include<stdlib.h>
// stdlib hafýzada yer açma
typdef struct n{
	int x;
	n next;
};


int main(){
    node root;
    //pointera yer açmak için malloc kullandýk
    //next bir sonraki dataya ve pointera eriþmeyi saðlar
    root = (node)malloc(sizeof(node));
    root -> x = 10;
    root -> next = (node )malloc(sizeof(node));
    root -> next -> x = 20;
    //iter kavramý pointerlarýn ve datalarý gezer tek bir yere sabitte kalabilir
    node iter;
    iter=root;
    printf("%d",iter -> x);
    iter = iter ->next;
    printf("%d",iter -> x);
    return 0;
}

