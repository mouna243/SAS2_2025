#include <stdio.h>
void inverse(){
      char nom[] = " Volvo";
  int size = sizeof(nom) / sizeof(nom[0]);
  int i;
  
  for (i = size ; i > 0; --i) {
    printf("%c", nom[i]);
  }

}
int main() {
 inverse();
  return 0;
}