#include <iostream>
void display(char sym){for (int x = 0; x < 20; x++){printf("%c", sym);}std::cout << std::endl;} void display(char sym, int rep){for (int x = 0; x < rep; x++){printf("%c", sym);}std::cout << std::endl;}int main(){display('*');display('@'); display('*',10);display('#',15);}
