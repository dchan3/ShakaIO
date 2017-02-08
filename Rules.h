/* 
 *
 */

#include <vector>
#include <functional>


bool rules_or(std::vector<std::function<bool(char)>> rules, char c){
    
    for(auto f : rules){
        if(f(c)){
            return true;
        }
    }
    return false;
} 
