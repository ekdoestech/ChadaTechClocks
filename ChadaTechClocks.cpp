/*
 * CS 210 – Project One: Chada Tech Clocks
 * Author: Erica Kinch
 * File: ChadaTechClocks.cpp
 * Date: 11/13/2025
 *
 * Description:
 *   Implements a dual-clock display that shows both 12-hour and 24-hour time.
 *   Users can increment hours, minutes, and seconds through a menu-driven
 *   interface. All time adjustments follow standard rollover rules.
 *   The program is modular, readable, and structured according to
 *   professional industry standards.
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

/* =============================================================
 * Display Formatting Constants
 * ============================================================= */

const int BOX_WIDTH = 26;        // Width of each clock box border
const int FIELD_WIDTH = 24;      // Width for text inside the box
const string GAP = "    ";       // Space between the two clock displays

/* =============================================================
 * Function Declarations
 * ============================================================= */

// Prints the menu options for modifying the clock time.
void displayMenu();

// Renders the 12-hour and 24-hour clock displays.
void displayClocks(int hour, int minute, int second);

// Time adjustment helpers with proper rollover logic.
void addHour(int& hour);
void addMinute(int& minute, int& hour);
void addSecond(int& second, int& minute, int& hour);

// Validates initial user time input for correct ranges.
void validateInitialTime(int& hour, int& minute, int& second);

// Centers text within a field of given width.
string centerText(const string& text, int width);



/* =============================================================
 * main()
 * Program entry point.
 * ============================================================= */

int main() {
    int hour;
    int minute;
    int second;

    // Prompt for initial time in 24-hour format
    cout << "Enter starting time in 24-hour format." << endl;
    cout << "Hour (0-23): ";
    cin >> hour;
    cout << "Minute (0-59): ";
    cin >> minute;
    cout << "Second (0-59): ";
    cin >> second;

    // Ensure initial values fall within valid time ranges
    validateInitialTime(hour, minute, second);

    int choice = 0;

    // Main loop: display clocks, show menu, process user selection
    while (choice != 4) {

        displayClocks(hour, minute, second);
        displayMenu();

        cout << "Select an option (1-4): ";
        cin >> choice;

        // Validate menu input
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nInvalid input. Please enter a number from 1 to 4.\n\n";
            choice = 0;
            continue;
        }

        cout << endl;

        // Apply user selection
        switch (choice) {
            case 1:
                addHour(hour);
                break;

            case 2:
                addMinute(minute, hour);
                break;

            case 3:
                addSecond(second, minute, hour);
                break;

            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid option. Please select 1-4." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}


/* =============================================================
 * Function Definitions
 * =============================================================

 * validateInitialTime
 * Ensures initial hour, minute, and second inputs fall within
 * standard 24-hour time constraints. Re-prompts user until valid.
 */
void validateInitialTime(int& hour, int& minute, int& second) {
    while (
        cin.fail() ||
        hour < 0 || hour > 23 ||
        minute < 0 || minute > 59 ||
        second < 0 || second > 59
    ) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "\nInvalid entry. Please enter valid time values.\n";
        cout << "Hour (0-23): ";
        cin >> hour;
        cout << "Minute (0-59): ";
        cin >> minute;
        cout << "Second (0-59): ";
        cin >> second;
    }
}

/*
 * displayMenu
 * Outputs the menu options for the user to modify the time.
 */
void displayMenu() {
    cout << "**************************" << endl;
    cout << "* 1 - Add One Hour       *" << endl;
    cout << "* 2 - Add One Minute     *" << endl;
    cout << "* 3 - Add One Second     *" << endl;
    cout << "* 4 - Exit Program       *" << endl;
    cout << "**************************" << endl;
    cout << endl;
}

/*
 * displayClocks
 * Displays the current time in both 12-hour and 24-hour formats.
 */
void displayClocks(int hour, int minute, int second) {
    int hour12 = (hour == 0) ? 12 : (hour > 12 ? hour - 12 : hour);
    string period = (hour < 12) ? "AM" : "PM";

    // Format time strings
    ostringstream oss12, oss24;

    oss12 << setw(2) << setfill('0') << hour12 << ":"
          << setw(2) << setfill('0') << minute << ":"
          << setw(2) << setfill('0') << second << " " << period;

    oss24 << setw(2) << setfill('0') << hour << ":"
          << setw(2) << setfill('0') << minute << ":"
          << setw(2) << setfill('0') << second;

    string time12 = oss12.str();
    string time24 = oss24.str();

    // Prepare centered text
    string label12 = centerText("12-Hour Clock", FIELD_WIDTH);
    string label24 = centerText("24-Hour Clock", FIELD_WIDTH);

    string timeLine12 = centerText(time12, FIELD_WIDTH);
    string timeLine24 = centerText(time24, FIELD_WIDTH);

    string border = string(BOX_WIDTH, '*');

    // Output side-by-side clocks (centered)
    cout << border << GAP << border << endl;

    cout << "*" << label12 << "*" 
         << GAP 
         << "*" << label24 << "*"
         << endl;

    cout << "*" << timeLine12 << "*"
         << GAP
         << "*" << timeLine24 << "*"
         << endl;

    cout << border << GAP << border << endl;
    cout << endl;
}


/*
 * addHour
 * Increments the hour value, rolling over to 0 after 23.
 */
void addHour(int& hour) {
    hour = (hour + 1) % 24;
}

/*
 * addMinute
 * Increments the minute value. Rolls over to next hour at 60.
 */
void addMinute(int& minute, int& hour) {
    minute++;
    if (minute == 60) {
        minute = 0;
        addHour(hour);
    }
}

/*
 * addSecond
 * Increments seconds. Rolls over to minutes and hours when required.
 */
void addSecond(int& second, int& minute, int& hour) {
    second++;
    if (second == 60) {
        second = 0;
        addMinute(minute, hour);
    }
}

/*
 * centerText
 * Centers a string within a field of the given width.
 */
string centerText(const string& text, int width) {
    if (text.length() >= width) {
        return text;
    }

    int remaining = width - text.length();
    int left = remaining / 2;
    int right = remaining - left;

    return string(left, ' ') + text + string(right, ' ');
}