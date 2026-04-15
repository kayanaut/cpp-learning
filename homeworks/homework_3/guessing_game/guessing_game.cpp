#include <iostream>
#include <random>

int main() {

  int smallest_number{};
  int largest_number{};

  // Random value creation setup
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};

  int random_created_value{};
  int user_guess{};
  int guess_count{};

  bool success = false;
  // Welcome Panel
  std::cout << "Welcome to the GUESSING GAME!\n"
            << "I will generate a number and you will guess it!\n";

  std::cout << "Please provide the smallest number:\n";
  std::cin >> smallest_number;

  std::cout << "Please provide the largest number:\n";
  std::cin >> largest_number;

  // Create random value
  std::uniform_int_distribution distribution{smallest_number, largest_number};
  random_created_value = distribution(random_engine);

  std::cout << "I've generated a number. Try to guess it!\n";

  while (!success) {
    std::cout << "Please provide the next guess: ";
    std::cin >> user_guess;
    guess_count++;
    if (user_guess < random_created_value) {
      std::cout << "Your number is too small. Try again!" << std::endl;
      ;
    } else if (user_guess > random_created_value) {
      std::cout << "Your number is too big. Try again!" << std::endl;
      ;
    } else if (user_guess == random_created_value) {
      std::cout << "You've done it! You guessed the number "
                << random_created_value << " in " << guess_count << " guesses!";
      // break;
      success = true;
    }
  }
  return 0;
}