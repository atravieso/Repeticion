/* 
* TP 3: "Enviar una frase a la salida estándar muchas veces (Saltos)"
* Grupo #2
* 26-04-2017
*/

#include <iostream>
#include <string>

int main(){

  std::string frase;
  int i=0, a;
  
  
  std::cout<<"ingrese la frase a repetir\n";
  std::getline (std::cin,frase);
  std::cout<<"ingrese la cantidad de veces a repetir\n";
  std::cin>>a;
  
  inicio:
  if (i<a){
    std::cout<<i+1<<") "<<frase<<"\n";
    i++;
    goto inicio;
  }
}
