#include<iostream>
#include<string>
using namespace std;
int suma(int *arr, int t){
    int res=0;
    for(int i=0;i<t;i++)
        res+=*(arr++);//(arr+i);arr[i];
        return res;
    }
void invertir(int *arr,int t){
    int *fin=arr+t-1;
    int tem=0;
    while(fin>arr){//compara direcciones de mermoria cuando es asterisco *arr esta en el valor
        tem=*arr;
        *arr=*fin;
        *fin=tem;
        arr++;
        fin--;
    }
}
void imprimir(int *arr,int t){
    if(t==0)
        return;
    cout<<*arr++<<" ";
    imprimir(arr,--t);
    }
bool palindrome(int *arr, int tam){
    int *fin=arr+tam-1;
    while(fin>arr){
          if(*fin-- !=*arr++)
            return false;
          }
    return true;
}
int sta_len(char *cad){
    int res=0;
    while(*cad!='\0')
        res++;
return res;
}
void str_cpy(char *cad,char *cad1){
    int i=0;
    while(cad[i]!='\0'){
        cad1[i]=cad[i];
        i++;
    }
}
int main(){
    int arr[]={4,2,10,30,20};
    int *ptr=arr;
    /*cout<<*ptr<<endl;
    cout<<*arr<<endl;
    cout<<*ptr+1<<endl;
    ptr++;
    cout<<*ptr<<endl;
    cout<<ptr[0]<<endl;//si le pongo ++ imprime 10

    cout<<suma(arr,5)<<endl;// o colocrle ptr
    invertir(arr,5);
    imprimir(arr,5);*/
    char cadena[]= "hola";
    char cadena1[20];
    //cout<<palindrome(arr,5);
    cout<<sta_len(cadena);
    str_cpy(cadena,cadena1);
    cout<<cadena1<<endl;//puntero de punteros



return 0;
}
