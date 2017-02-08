/* Paulo Lemus
 * 2/7/2017
 */

/* A .h file that contains functions used to accept different
 * kinds of input from istream.
 */

#include <iostream>
#include <cctype>
#include "io.h"

// Function to accept n empty string
bool emptyString(char c){
    return true;
}


// Function to accept one or more of the char given
bool oneOrMore(char c){
    
    bool accept = false;

    while(peek() == c){
        if(get() == c){
            accept = true;
        }
        else{
            accept = false;
            break;
        }
    }
    return accept;
}


/* A Function that will parse from istream a name.
 * A name is a string that is purely alpha characters.
 * If there is no name, it returns false.
 * If there is one or more alphas in a row, it gets and 
 * returns true.
 */
bool acceptName(char c){
    
    bool accept = false;

    while(isalpha(peek()) != 0){
        get();
        accept = true;
    }
    return accept;
}
bool acceptName(){

    bool accept = false;
    while(isalpha(peek()) != 0){
        get();
        accept = true;
    }
    return true;
}

