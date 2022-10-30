#include <iostream>
#include <cmath>
double nth, n1, n2, n3, n4, n5, n6, n7;
using namespace std;


void loop(){
  cout << "\n\nEnter nth term: ";
  cin >> nth;
  cout << "\n";
  // 1/√5 = ((1+√5)^n / 2 - ((1+√5)^n)/2)
  

  n1 = ((1 + sqrt(5))/2);
  n2 = pow(n1, nth);
  n3 = ((1 - sqrt(5))/2);
  n4 = pow(n3, nth);
  n5 = n2 - n4;
  n6 = (n5 / sqrt(5));

  cout << "\n\n";
  cout << nth;
  cout << "'th term = ";
  cout << n6;
  cout << "\n\n\n";
  cout << "built by qutaibah, using cpp\nusing the equation: ((1+√5)^n / 2 - ((1+√5)^n)/2) / √5";

  loop();
}



int main()
{
  cout << "\n\nEnter nth term: ";
  cin >> nth;
  cout << "\n";
  // 1/√5 = ((1+√5)^n / 2 - ((1+√5)^n)/2)
  

  n1 = ((1 + sqrt(5))/2);
  n2 = pow(n1, nth);
  n3 = ((1 - sqrt(5))/2);
  n4 = pow(n3, nth);
  n5 = n2 - n4;
  n6 = (n5 / sqrt(5));

  cout << "\n\n";
  cout << nth;
  cout << "'th term = ";
  cout << n6;
  cout << "\n\n\n";
  cout << "built by qutaibah, using cpp\nusing the equation: ((1+√5)^n / 2 - ((1+√5)^n)/2) / √5";

  loop();
}