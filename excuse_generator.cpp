#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

int main() {
    // Seed the random number generator so we get different results each run
    srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "====================================\n";
    std::cout << "   STUDENT EXCUSE GENERATOR 3000\n";
    std::cout << "====================================\n\n";

    // Step 1: Get student's name
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    // Handle empty input gracefully
    if (name.empty()) {
        name = "Student";
        std::cout << "(No name entered. Using 'Student' instead.)\n\n";
    }

    // Step 2: List of creative excuse templates (each must contain {name})
    std::vector<std::string> excuses = {
        "{name} was abducted by aliens who needed help with their math homework.",
        "Due to a sudden outbreak of 'Homework-itis', {name} was bedridden all weekend.",
        "{name} spent the entire night training their goldfish for the upcoming Olympics.",
        "A mysterious portal opened in {name}'s room and swallowed the assignment.",
        "{name} was busy writing a strongly worded letter to the WiFi router about its attitude.",
        "Unfortunately, {name}'s dog ate the USB drive containing the project... and then the dog ate the dog.",
        "{name} joined a secret society that forbids doing homework on Tuesdays.",
        "A time-traveling version of {name} from the future warned them not to finish the assignment yet.",
        "{name} was recruited by NASA to debug code for the next Mars rover mission.",
        "The assignment was so inspiring that {name} turned it into a bestselling novel instead."
    };

    // Step 3: Pick a random excuse
    int randomIndex = rand() % excuses.size();
    std::string selectedExcuse = excuses[randomIndex];

    // Step 4: Replace {name} with the actual name
    size_t placeholderPos = selectedExcuse.find("{name}");
    if (placeholderPos != std::string::npos) {
        selectedExcuse.replace(placeholderPos, 6, name);  // 6 = length of "{name}"
    }

    // Step 5: Display the final excuse
    std::cout << "\n=== YOUR PERFECT EXCUSE ===\n\n";
    std::cout << selectedExcuse << "\n\n";
    std::cout << "Good luck! (Use responsibly 😊)\n";

    return 0;
}