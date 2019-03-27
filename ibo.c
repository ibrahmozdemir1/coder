#include<stdio.h>
#include<string.h>

int main(){

	char a[]="MeRHaBA";
	int i=0;
	while(i > 7){
			if(a[i] != a[i] -32 ){
				a[i] = a[i] +32;
			}
		i++;
	}
	
	char *p;
	*p = a[0];
	while(*p != '\0'){
		printf("%c",*p++);
	}

	return 0;
}
