#include <iostream>

using namespace std;

int invertir(int n) //O(log.n)
{
    int aux;
    int invertido=0;
    int pos=1;
    int divisor=1;
    while(divisor<n)
    {
        divisor=divisor*10;
    }
    while(n>0)
    {
        divisor=divisor/10;
        aux=(n/divisor);
        n=n-(aux*divisor);
        invertido=invertido+(aux*pos);
        pos=pos*10;
    }
    return invertido;
}

void invertirNum(int n)
{
    if (n>0)
    {
        cout<<n%10;
        invertirNum(n/10);

    }
}

void convertir(int n)
{
    if(n>0)
    {
        convertir(n/2);
        cout<<n%2;
    }
}
int main()
{
    int n;
    cout << "numero a invertir" << endl;
    cin>>n;
    cout<<"numero invertido"<<endl;
    invertirNum(n);
    cout<<"numero a covertir a binario"<<endl;
    cin>>n;
    convertir(n);
    return 0;
}
