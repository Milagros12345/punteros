#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int punteros(int *pb,int *pe){
    int res;
    res=pow(*pb,*pe);
    return res;
}
int puntero(int *base,int *exp){
    int f=1;
    for(int i=1;i<=*exp;i++){
        f*=*base;
    }
    return f;
}
void intercambia(int &a,int &b){//paso por valor pero no referncia el & referencia a entero
    int tem=a;
    a=b;
    b=tem;}
void punt(int *p1,int *p2){//con *p1 utilizando * cambia el valor,pero si no unasamos *solo de posicion por lo tanto no cmbia
    int temp=*p1;
   *p1=*p2;
    *p2=temp;
}
bool bisiestro(int *a){
    return(*a%4==0 && (*a%100!=0 || *a%400==0));
        }
bool primo(int *a){
    int  b=0;
    for(int i=1;i<=*a;i++){
        if(*a%i==0)
            b++;
    }
    return (b==2);//cuando se trate de un numero verdad retorna 1 y si es
    }
bool perfecto(int *p){
    int b=0;
    for(int i=1;i<=*p;i++){
        if(*p%i==0)
            b+=i;
    }
    return(b==*p);
    }
int main(){
    int b=3,e=2;
    int x=6,y=5;
    //cout<<punteros(&b,&e)<<endl;
    cout<<puntero(&b,&e)<<endl;
    intercambia(x,y);
    cout<<x<<"  "<<y<<endl,
    punt(&x,&y);
    cout<<x<<"  "<<y<<endl;
    int z=5;
    int &l=z;//apunamos a z
    /*int *ptr=&z;//puntero apunta a z
    l++;//ingrementa z porque l apunta a z si modificamos l estamos modificando l igual abajo incrementa
    z++;
    int d=6;
    *ptr+=30;//imprime 37
    cout<<z<<endl;
    int anio=2015;
    cout<<bisiestro(&anio)<<endl;
    //cout<<primo(&z)<<endl;*/
    int h=3;
    cout<<perfecto(&h);


    return 0;
}
