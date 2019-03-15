#include<stdio.h>
#include<conio.h>
int main() 
{ 

int i,k,T,m=0; 

printf("輸入 T ，求 1 ~ T 內的質數 ： "); 
scanf("%d",&T); 

for ( i = 2 ; i <= T ; i++) 
{ 
m =0; 

for ( k = 1 ; k <= T ; k++) 
{ 
if( (i % k) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t 是質數 !\n",i); 

} 
getch(); 
return 0; 

}
