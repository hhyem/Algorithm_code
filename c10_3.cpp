#include <iostream>
using namespace std;

void f(Person person) {
  person.changeName("dummy");
}

Person g() {
  Person mother(2, "Jane");
  return mother;
}

int main() {
  Person father(1, "Kitae");
  Person son = father;
  f(father);
  g();
}
