#include<stdio.h>
#include<conio.h>
int main() 
{ 

int i,k,T,m=0; 

printf("��J T �A�D 1 ~ T ������� �G "); 
scanf("%d",&T); 

for ( i = 2 ; i <= T ; i++) 
{ 
m =0; 

for ( k = 1 ; k <= T ; k++) 
{ 
if( (i % k) == 0 ) m++; 
if ( m > 2 ) break; 
} 
if ( m <= 2 ) printf("%d \t �O��� !\n",i); 

} 
getch(); 
return 0; 

}
