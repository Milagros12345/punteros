#include<iostream>
#include<string>
using namespace std;
int suma(int *arr,int tam){
    int res=0;
    for(int i=0;i<tam;i++)
        res+=*arr;
    return res;}
void invertir(int *arr,int tam){
    int *fin=arr+tam-1;
    int t;
    while(fin>arr){
        t=*arr;
        *arr=*fin;
        *fin=t;
        fin--;
        arr++;
    }
}
void imprimir(int *arr,int t){
    for(int i=0;i<t;i++)
        cout<<*arr++;
    }
bool palindrome(int*arr,int t){
    int *fin=arr+t-1,tem;
    while(fin>arr){
        if(*fin--!=*arr++)
            return false;
    return true;
    }
}
int tama(char *arr){
    int c=0;
    while(*arr!='\0')
        c++;
return c;
}
int main(){
int a[]={4,2,6,8,0};
int x=20;
int y=30;
int *arr[3];
arr[0]=&x;
cout<<**arr;
int *ptr=&x;
*ptr+=6;
char letra[]="sedm";
cout<<tama(letra)<<endl;
char *pc=letra;
cout<<*++pc;
int *x1=new int;
*x1=5;
cout<<*x1<<endl;
delete x1;
return 0;
}
