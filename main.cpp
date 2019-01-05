#include<stdio.h>
#include<conio.h>

void fungsi_by_value(int a){
a=a*3;
printf("A by value adaah = %d alamatnya adalah %p\n",a,&a);

}
int main(){
int a=5;
printf("A main adalah = %d alamatnya adalah %p\n",a,&a);

fungsi_by_value(5*a+1);
getch();
}
