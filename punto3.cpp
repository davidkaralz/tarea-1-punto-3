#include <iostream>
#include <string>

using namespace std;
int main()
{
     int a ;
     string val;
     string num;
     cout<<"Ingrese un numero"<<endl;
     cin>>a;
     num=(a==0)? "El numero es CERO":(a%2==0)?"El n�mero es PAR":"El n�mero es IMPAR";
     cout<<num;
     
     return 0;
}
