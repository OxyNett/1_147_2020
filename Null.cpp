#include <iostream> 
#include <cstdio> 

int main() 
{ 
std::puts("Please enter a and b 'ax + b = 0' : "); 
int a = 0; 
int b = 0; 
int x = 0; 
scanf_s("%d %d", &a, &b); 
getchar(); 
if (a == 0) 
{ 
std::printf("cannot be divisible by 0"); 

} 
else { 
x = -b / a; 
std::printf("solution: %d", x); 
}
