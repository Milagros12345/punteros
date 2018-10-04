#include <iostream>
#include<string.h>
using namespace std;
bool palindrome(char a[],int ini,int fin){//recursiva
    if(ini>=fin)return true;
    if(a[ini]==a[fin]){
        palindrome(a,ini +1,fin-1);
    }
    else
        return false;
}
void cambiaMayus(char a[],int tam){//no recursiva
    char res;
    for(int i=0;i<tam;i++){
        if((97<=static_cast<int>(a[i]) && static_cast<int>(a[i])<=122)) {
            a[i]=static_cast<char>((static_cast<int>(a[i])-32));
        }
    }
    for(int i=0;i<tam;i++)
        cout<<a[i];
}

int main()
{
    char p[]="reconocer";
    int tam,a;
    tam=strlen(p);
    bool m=palindrome(p,0,tam-1);
    if(m==true)cout<<"es palindrome";
    else
        cout<<"no es palindrome";
    char s[]="HolWMROmi";
    a=strlen(s);
    cambiaMayus(s,a-1);
return 0;}
