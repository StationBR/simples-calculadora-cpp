#include <iostream>
using namespace std;

int main()
{
  while{
  // Veja como o printf funciona
  cout << "Programa Iniciado" << endl;
  cout << "Calculadora Simples" << endl;

  int a , b;

  cout << "Digite A: ";
  cin >> a;

  cout << "Digite B: ";
  cin >> b;

  char operacao;
  cout << "Digite a operação (+, x, -, /): ";
  cin >> operacao;

  int resultado;

  if (operacao == '+') {
    resultado = a + b;
  }
  else if (operacao == 'x') {
    resultado = a * b;
  }
  else if (operacao== '-'){
    resultado = a - b;
  }
  else if (operacao == '/'){
    resultado = a / b;
  }  
  else {
    cout << "A operação \"" << operacao << "\"nao foi reconhecida" << endl;
    return 1; // Detectamos um erro, sair
  }
}
  cout << "Resultado: " << resultado << endl;
  cout << "\nFim de Programa\nAperte enter para fazer outra conta";
  return 0; // sucesss, facultativo
}
/** By Station Equipe
site: https://paulostationbr.xyz**/
