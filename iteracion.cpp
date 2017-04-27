/* 
* TP 3: "Enviar una frase a la salida estándar muchas veces(iteración)"
* Grupo #2
* 26-04-2017
*/

#include <iostream>
#include <string>

int main(){

  std::string frase;
  int a;
  
  std::cout<<"ingrese la frase a repetir\n";
  std::getline (std::cin,frase);
  std::cout<<"ingrese la cantidad de veces a repetir\n";
  std::cin>>a;
  
  for(int i=0; i<a; i++){
    std::cout<<i+1<<") "<<frase<<"\n";
  }
}
