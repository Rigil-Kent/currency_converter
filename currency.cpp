#include <iostream>

int main() 
{
  
  double peso, quetzals, colons, dollars;
  
  std::cout << "Enter number of Mexican Pesos: ";
  //0.049 per dolloar
  std::cin >> peso;
  //0.13 per dollar
  std::cout << "Enter number of Guatemalan Quetzals: ";
  std::cin >> quetzals;
  //0.0017 per dollar
  std::cout << "Salvadoran Colons: ";
  std::cin >> colons;
  
  dollars = (peso * 0.049) + (quetzals * 0.13) + (colons + 0.0017);
  std::cout << "US Dollars = $" << dollars << "\n";
  
  
  return 0;
   
}
