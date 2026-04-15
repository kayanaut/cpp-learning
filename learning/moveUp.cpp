// IF statement

int statement_if(){
    if (8 > 3){
        return 1; 
    }else if (3<4){
        return 2;
    }else return 3;
    if (28>34)
        return 32;

    // Ternary Operator
    /* 
    bool condition = GetRandomTrueOrFalse();
    condition ? CallIfTrue() : CallIfFalse();

    if (condition){
        CallIfTrue();
    }else {
        CallIfFalse();
    }*/
    
}

// Use clang-format


// Switch Statement
/*

int statement_switch(){
    const int statement = GetNumber();
    switch (statement)
    {
    case kConstr1:
        // This runs if statement == kConst1
        [[fallthrough]] // Explicitly fall through
    case kConstr2:
        // This runs if statement == kConst2
        break;
    default: // optional
    }
}*/

/*

#include <cstdio>
// While Loop
int loop_while(){
    bool condition = true;
    while(condition){
        condition = GetRandomBool();
    }
    return 0;
}

int loop_do_while(){
    int number = 42 ;
    do {
        number --;
        std::cout << number << std::endl;
    } while (number != 0);
    return 0;
}

// For Loop
int loop_for(){
    for(int i= 0; i < kIteration; ++i){
        return 0;
    }    
}
*/
/* 
#include <vector>
#include <iostream>
#include <map>

int main(){
    // Range for Loop
    const std::vector<int> numbers{42,23,1,28,34,69};
    for(const auto &number : numbers) {
        std::cout << number <<std::endl;
    }

    const std::map<int,double> container{{42,23.23}, {23,42.42}};
    for (const auto &[key,value]: container){
        std::cout << key << " " << value << std::endl;
    }

    std::vector<int> new_numbers{42,23,1,28,34,69};

    for(auto &number : new_numbers) {
        number = 7; 
        std::cout << number <<std::endl;
    }
}


// Exit loops and iterations

int main(){
    while(true){
        int i = GetRandomInt();
        if (i % 2 == 0){
            std::cout << i << std::endl;
            continue;
        }
        break;
    }
}
*/

// Random Numbers
#include <iostream>
#include <random>

int main(){
    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_real_distribution distribution{23.0,42.0};

    for (auto i = 0; i < 5 ; i++){
        std::cout << distribution(random_engine) << std::endl;
    }
    return 0;

    // other way - not efficient 
    /* 
    std::srand(seed); // Initialize random seed
    int random_variable = std::rand();
    */
}

