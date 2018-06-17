#include "lab.h"

int main()
{
    Telegraph::open();
    Telegraph t;
    char text[80], morse[300];
    
    std::string s = getenv("QUERY_STRING");
    std::string message,ignore,option;
    std::stringstream ss;
    ss << s;
    
    while(ss) {
        getline(ss,ignore,'=');
        getline(ss,message,'&');
        getline(ss,option,'&');
    }
    
    std::replace(message.begin(),message.end(),'+',' ');
    
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        if(c == '2')
            message.erase(i,2);
    }
    
    std::replace(message.begin(),message.end(),'%','/');
    
    if(option == "o=morse") {
        strcpy(text,message.c_str());
        t.encode(text,morse);
        std::cout << "English: " << message << std::endl;
        std::cout << "Morse Translation: " << morse << std::endl;
    }
    else if(option == "o=english") {
        message = message + "  ";
        strcpy(morse,message.c_str());
        t.decode(morse,text);
        std::cout << "Morse: " << message << std::endl;
        std::cout << "English Translation: " << text << std::endl;
    }
    Telegraph::close();
}
