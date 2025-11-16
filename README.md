# ChadaTechClocks

![C++](https://img.shields.io/badge/language-C++17-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Visual%20Studio-blueviolet)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![PRs](https://img.shields.io/badge/PRs-welcome-blue.svg)
![Repo Size](https://img.shields.io/github/repo-size/ekdosetech/ChadaTechClocks)


Dual-format clock program implemented in C++ for SNHU CS-210.  
The application displays synchronized 12-hour and 24-hour clocks and provides a menu-driven interface for adjusting hours, minutes, and seconds with full rollover logic.  
This project will continue to evolve as part of my portfolio.

---

## 📚 Table of Contents
- [Features](#-features)
- [Technical Overview](#-technical-overview)
- [File Structure](#-file-structure)
- [Build & Run](#-how-to-build--run)
- [Learning Objectives Demonstrated](#-learning-objectives-demonstrated)
- [Future Enhancements](#-future-enhancements)
- [Why This Project Matters](#-why-this-project-matters)
- [Contributing](#-contributing)
- [License](#-license)
- [Contact](#-contact)

---

## 🔧 Features

- Dual clock display:
  - 12-hour format with AM/PM
  - 24-hour (ISO 8601) format
- Menu-driven user interface
- Adjustable:
  - Hour
  - Minute
  - Second
- Precise rollover behavior:
  - 23 → 0 hours
  - 59 → 0 minutes
  - 59 → 0 seconds
  - Cascading adjustments (e.g., 23:59:59 → 00:00:00)
- Modular C++ architecture for clarity and reuse


---

## 🛠 Technical Overview

- **Language:** C++17  
- **IDE:** Microsoft Visual Studio  
- **Paradigm:** Modular procedural design  
- **Key functions:**
  - `displayMenu()`
  - `displayClocks()`
  - `addHour()`
  - `addMinute()`
  - `addSecond()`
- **Design goals:**
  - Clean separation between UI and logic
  - Minimal global state
  - Clear and maintainable code structure
  - Professional-grade commenting and formatting

---

## 📁 File Structure

```
ChadaTechClocks/
├── ChadaTechClocks.cpp        # Main program source file
├── ChadaTechClocks.sln        # Visual Studio solution
├── ChadaTechClocks.vcxproj    # Project configuration
├── ChadaTechClocks.vcxproj.filters
├── .gitattributes
├── .gitignore                 # Visual Studio ignores
├── README.md                  # Project documentation
└── ...
```

---

##   How to Build & Run

### ✔ Using Visual Studio
1. Open `ChadaTechClocks.sln`
2. Select **Build → Build Solution**
3. Select **Debug → Start Without Debugging**  
   or press **Ctrl + F5**

---

## 🎓 Learning Objectives Demonstrated

- Modular C++ program design  
- User interface and control flow  
- Function declarations & definitions  
- Time formatting (12-hour & 24-hour)  
- Increment and rollover logic  
- Input handling  
- Code readability and maintainability  
- Professional software documentation

---

## 📈 Future Enhancements

- Real-time clock ticking
- User-defined starting time
- Logging or time history

---

## 💡 Why This Project Matters

This project demonstrates essential skills for early software engineering roles:

- Modular program architecture  
- Clean, maintainable code  
- Functional problem-solving with real-world time systems   
- Proper user interaction design 
- Professional documentation  
- Use of modern C++ standards  

It serves as both an academic deliverable **and** a portfolio-ready example.

---



## 👤 Author

**Erica Kinch**  
Computer Science Student
GitHub: https://github.com/ekdosetech
