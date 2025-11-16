/*
 * CS 210 – Project One: Chada Tech Clocks
 * Author: Erica Kinch
 * File: ChadaTechClocks.cpp
 * Date: 11/13/2025
 * 
 * Description:
 *   Displays two clocks (12-hour and 24-hour) and allows the user
 *   to increment the hour, minute, or second using a menu-driven interface.
 *   Implements proper rollover logic and uses modular functions for clarity.
 *
 * Features:
 *   - 12-hour and 24-hour formatted displays
 *   - Menu-driven time adjustments
 *   - Second → minute → hour rollover
 *   - Clean, modular C++ design
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* =============================================================
 * Function Declarations
 * ============================================================= */

// Displays menu options for the user.
void displayMenu() {
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

// Displays both the 12-hour and 24-hour clocks.
void displayClocks(int hour, int minute, int second) {
    // Format 12-hour time
    int displayHour12 = hour % 12;
    if (displayHour12 == 0) {
        displayHour12 = 12; // Adjust midnight/noon hour
    }
}

// Adds one hour (with rollover).
void addHour(int& hour);

// Adds one minute (with rollover).
void addMinute(int& minute, int& hour);

// Adds one second (with cascading rollover).
void addSecond(int& second, int& minute, int& hour);

// Helper: centers text in a fixed-width field.
string centerText(const string& text, int width);

// Helper: displays a centered clock box with borders.
void formatClockBox(const string& label, const string& timeString);


/* =============================================================
 * main()
 * Controls overall program operation:
 *   - Prompts the user to enter the initial starting time
 *     (hour: 0–23, minute: 0–59, second: 0–59)
 *   - Stores the initial values in hour, minute, and second
 *   - Enters the primary loop:
 *       • Displays the clocks
 *       • Displays the menu
 *       • Accepts and processes menu input
 *       • Adjusts time based on user selection
 *   - Loop continues until the user selects the exit option.
 *
 * Notes:
 *   - Starting time must be entered in 24-hour format as required.
 *   - No input validation is required for this project’s “happy path.”
 * =============================================================
 */


int main() {
    int hour;
    int minute;
    int second;

    // 1. Prompt user for starting time
    cout << "Enter starting time in 24-hour format." << endl;
    cout << "Hour (0-23): ";
    cin >> hour;
    cout << "Minute (0-59): ";
    cin >> minute;
    cout << "Second (0-59): ";
    cin >> second;
    cout << endl;


    // 2. Display clocks (after time is initialized)
    displayClocks(hour, minute, second);

    // 3. Program loop will be added later

    return 0;
}



/* =============================================================
 * Function Definitions 
 * =============================================================
 */

 // displayMenu()
 // Presents available user actions.


 // displayClocks()
 // Formats and prints both the 12-hour and 24-hour representations.


 // addHour()
 // Adjusts hour by one and wraps to 0 after 23.


 // addMinute()
 // Adjusts minute by one and triggers hour rollover when needed.


 // addSecond()
 // Adjusts second by one and triggers minute/hour rollover when needed.

 // formatClockBox(label, timeString)
// Purpose:
//   - Renders one complete clock display box using star borders.
//   - Center-aligns the label and the time inside the box.
//   - Ensures width and formatting match the project requirements.
// Notes:
//   - Called twice by displayClocks() (for 12-hour and 24-hour clocks).


// centerText(text, width)
// Purpose:
//   - Produces a string padded on both sides so that 'text' appears centered
//     within a field of the specified width.
// Notes:
//   - Used by formatClockBox() to center labels and time strings.
