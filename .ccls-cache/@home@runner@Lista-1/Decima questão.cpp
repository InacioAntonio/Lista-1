#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
  cout << "Digite o Valor de a\n";
  cin >> a;
  cout << "Digite o Valor de B\n";
  cin >> b;
  cout << "\n A+b é "<<a+b<< " A-B é "<<a-b<< " A*b é "<<a*b<< " A/b é "<<a/b;
  cout << "\nDigite um Valor para c";
  cin >> c;
  cout << "\nDigite um Valor para d ";
  cin >> d;
  if(c==0 && d==0){
      cout << "  c e d iguais a 0\n ";
      
  }else{
      cout << " \nc e d não são iguais a 0";
      if(c==0 || d==0){
          cout << "\n mas c ou d são iguais a 0";
      } 
  }
    
  
  
}