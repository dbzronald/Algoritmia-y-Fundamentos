#include <stdio.h>
	int persistence(int x);
	int main(int argc, char *argv[]){
	  int x;

	  printf("Insert an integer: ");
	  scanf("%d", &x);

printf("\nThe persistence of %d is %d.\n", x, persistence(x));

return(0);
}

int persistence(int x){
int digit, y = 1, pers = 0;

while( x > 0 ){
do{
digit = x % 10;
y = y * digit;
x = x / 10;
}while( x > 9 );

pers++;
x = y;
}

return( pers );
}
