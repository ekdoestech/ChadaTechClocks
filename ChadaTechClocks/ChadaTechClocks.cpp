/*
 * CS 210 – Project One: Chada Tech Clocks
 * File: ChadaTechClocks.cpp
 * Author: Erica Kinch
 *
 * Description:
 *   This program manages a dual-clock system that displays time in both
 *   12-hour and 24-hour formats. Users can increment hours, minutes, or
 *   seconds, and all time updates follow standard rollover behavior.
 *
 * Program Structure:
 *   - Menu-driven interface
 *   - Display of two synchronized clock formats
 *   - Modular functions for time adjustments
 *
 * Time Logic:
 *   - 24-hour clock rolls over at 24 → 0
 *   - Minutes and seconds roll over at 60 → 0
 *   - Second increments may cascade into minute/hour rollover
 *   - Minute increments may cascade into hour rollover
 */


#include <iostream>
#include <iomanip>
using namespace std;


/* =============================================================
 * Function Declarations
 * =============================================================
 */

 // Displays menu options for the user.
void displayMenu();

// Shows the current time in both 12-hour and 24-hour formats.
void displayClocks(int hour, int minute, int second);

// Adds one hour with rollover at 24.
void addHour(int& hour);

// Adds one minute and triggers hour rollover when necessary.
void addMinute(int& minute, int& hour);

// Adds one second and triggers minute/hour rollover when necessary.
void addSecond(int& second, int& minute, int& hour);


/* =============================================================
 * main()
 * Controls overall program operation:
 *   - Initializes time values
 *   - Runs the primary loop
 *   - Displays clocks and menu
 *   - Accepts and processes user input
 *   - Calls the appropriate adjustment function
 *
 * The loop terminates when the user selects the exit option.
 * =============================================================
 */

int main() {
    // Implementation will be added after structural verification.
    return 0;
}


/* =============================================================
 * Function Definitions (Documentation Only)
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