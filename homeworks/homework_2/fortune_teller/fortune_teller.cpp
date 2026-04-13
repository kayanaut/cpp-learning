#include <iostream>
#include <string>
#include <vector>

int main(){
    // Variables
    std::string time{};
    std::string name{};
    std::string adjective{};

    std::string description{};
    std::string end{};
    std::string noun{};

    // Using vectors
    std::vector<std::string> adj(2);
    std::vector<std::string> endings = {
        "eats UB for breakfast",
        "finds errors quicker than the compiler",
        "is not afraid of C++ error messages"
    }; 

    // IO Panel
    std::cout << "Welcome to the fortune teller program! \n";
    std::cout << "Please enter your name: \n";
    std::cin >> name;
    std::cout << "Please enter the time of year when you were born: \n(pick from 'spring', 'summer', 'autumn', 'winter')\n";
    std::cin >> time;
    std::cout << "Please enter an adjective:\n";
    std::cin >> adj[0];
    std::cout << "Please enter another adjective:\n";
    std::cin >> adj[1];

    // Fortune Decision
    if (time == "spring"){
        noun = "STL guru";
    }else if (time == "summer"){
        noun = "C++ expert";    
    }else if (time == "autumn"){
        noun = "coding beast";
    }else if (time == "winter"){
        noun = "software design hero";
    }else noun = "mysterious programmer";

    adjective = adj[name.size() % adj.size()];
    end = endings[name.size() % endings.size()];

    // Results
    std::cout << "\nHere is your description:\n";
    std::cout << name <<", the "<< adjective <<" "<< noun <<" that "<< end << "\n";    
    return 0;
}