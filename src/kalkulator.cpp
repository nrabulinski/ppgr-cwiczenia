#include <iostream>

int main() {
  for (;;) {
    std::cout <<
      "   KALKULATOR\n"
      "----------------\n\n";
  
    int a, b;
    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> a;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;
  
    int menu;
    std::cout << 
      "\nWybierz działanie:\n"
      "1. Dodawanie\n"
      "2. Odejmowanie\n"
      "3. Mnożenie\n"
      "4. Dzielenie\n"
      "5. Modulo\n"
      "0. Wyjście\n"
      "Twój wybór: ";
    for (;;) {
      std::cin >> menu;
    
      if (menu > 5 || menu < 0)
        std::cout << "Niepoprawny wybór. Spróbuj ponownie: ";
      else break;
    }

    switch (menu) {
      case 0:
        return 0;
      case 1:
        std::cout << a << " + " << b << " = " << a + b << "\n\n";
        break;
      case 2:
        std::cout << a << " - " << b << " = " << a - b << "\n\n";
        break;
      case 3:
        std::cout << a << " * " << b << " = " << a * b << "\n\n";
        break;
      case 4:
        std::cout << a << " / " << b << " = " << a / b << "\n\n";
        break;
      case 5:
        std::cout << a << " % " << b << " = " << a % b << "\n\n";
        break;
    }
  }
}
