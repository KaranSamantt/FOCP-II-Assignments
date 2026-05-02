#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to replace {name} with actual name
string personalizeRoast(string roast, string name) {
    size_t pos = roast.find("{name}");
    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }
    return roast;
}

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // Handle empty input
    if (name.empty()) {
        cout << "Name cannot be empty. Try again.\n";
        return 0;
    }

    // List of roast templates
    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would win gold.",
        "{name}'s debugging style is staring until the bug leaves.",
        "{name}'s code runs so slow, dial-up feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name}'s code has more errors than a failed exam.",
        "{name} compiles code just to see new errors.",
        "{name}'s logic is like WiFi — weak and unstable.",
        "{name} codes like it's still the Stone Age."
    };

    // Seed random generator
    srand(time(0));

    // Pick random roast
    int index = rand() % roasts.size();

    // Personalize roast
    string finalRoast = personalizeRoast(roasts[index], name);

    // Output
    cout << "\n🔥 Roast: " << finalRoast << endl;

    return 0;
}