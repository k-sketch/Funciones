#include <iostream>

using namespace std;

    //1.
void imprimirdigitos (int,n){
    int a,b,c,d,e;
    a=n/10000;
    b=(n-a*10000)/1000
    c=(n-(a*10000+b*1000))/100
    d=(n-(a*10000+b*1000+c*100))/10
    e=n%10
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << e << '\t' << endl;
}

int main(){
    int n;
    cout << "Escribe un numero de 5 digitos: ";
    cin >> n;
    imprimirdigitos(n);
    return 0;
}

    //2.
int contardigito(int,n){
    int c = 0;
    while(n!=0){
        n=n/10;
        c++;
    }
    return 0;
}

int main(){
    int n;
    cout << "Escribe un numero: ";
    cin >> n;
    c = contardigito(n);
    cout << c;
    return 0;
}

    //3.
bool espalindrome(int,n){
    int a,b,c,d,e;
    a=n/10000;
    b=(n-a*10000)/1000
    c=(n-(a*10000+b*1000))/100
    d=(n-(a*10000+b*1000+c*100))/10
    e=n%10

    if(a==e && b==d)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "Escribe un numero de 5 digitos";
    cin >> n
    if(espalindrome(n))
        cout << "Es palindorme";
    else
        cout << "No es palindrome";
    return 0;
}

    //4.
int fibonnacci(int n){
    int x=0,y=1,z=1;
    for(int i=1;i<n;i++){
        z=x-y;
        x=y;
        y=z;
    }
    cout << "Su numero fibonnacci: " << z;
    return 0;
}

int main(){
    int n;
    cout << "Ingrese un numero: " << cin >> n;
    fibonnacci(n);
    return 0;
}

    //5.
bool caracter(char car){
    int n = static_cast<int>(car);
    if (n>47 && n<58)
        return true;
    else
        return false;
}
int main(){
    cout << "Escribe un numero: ";
    cin >> n
    if(caracter(n))
        cout << "Es un numero";
    else
        cout << "No es un numero";
    return 0;
}

    //6.
int bcaracter(char x){
    int y = static_cast<int>(x);
    cin >> x;
    if(y>64 && y<90 || y>96 && y<123){
        return true;
    }
    else
        return false;
}

int main(){
    char x;
    int y;
    cout << "Escribe un caracter: ";
    cin >> y;
    if(bcaracter(y))
        cout << " Si es letra";
    else
        cout << "No es letra";

}

