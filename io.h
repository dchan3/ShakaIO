#include <iostream>
#include <string>

char get(){
    return std::cin.get();
}
char peek(){
    return std::cin.peek();
}
bool eof(){
    return std::cin.eof();
}
void error(std:: string str){
    throw str;
}
