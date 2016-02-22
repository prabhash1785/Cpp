#include<iostream>
using namespace std;

void infiniteLoop() {
  
  unsigned int i;

  for(i = 10; i >= 1; --i) { // i >=0 will be INCORRECT because that will always evalue to true since i is unsigned int which will result in infinite loop 
    printf("%d\n",i);
  }
}

int main() {
  
  infiniteLoop();

  return 0;
}
