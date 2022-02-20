

#include <iostream>

int main()

{   int x;
    
    std::string raspuns ="Autumn";
    
    std::cout << "Guess the season. Pick a number\n";
    
    std::cout << "1. Spring\n2. Summer\n3. Autum\n4. Winter\n";
    
    std::cin >> x;
    
    switch(x){
        
        case 3 :std::cout << "Answer was correct! Good job! You're to good but still don't try again!" << std::endl;break;
        
        
        
        default: std::cout << "You didn't chose the right season. Don't try again you're to bad!" << std::endl;break;
        
    }
    
    
    
    
    return 0;
}
