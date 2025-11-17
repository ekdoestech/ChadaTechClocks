# ChadaTechClocksProject

![C++](https://img.shields.io/badge/language-C++17-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Visual%20Studio-blueviolet)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![PRs](https://img.shields.io/badge/PRs-welcome-blue.svg)
![Repo Size](https://img.shields.io/github/repo-size/ekdoestech/ChadaTechClocksProject)


Dual-format clock program implemented in C++ for SNHU CS-210.  
It displays synchronized 12-hour and 24-hour clocks and allows incrementing hours, minutes, and seconds with full rollover logic.  
This project continues to evolve as part of my compsci portfolio.


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


## 🔧 Features

- 12-hour AM/PM clock display  
- 24-hour (ISO 8601) clock display  
- Menu-driven user interface  
- Increment hour, minute, or second  
- Full rollover handling:
  - 23 → 0 (hours)
  - 59 → 0 (minutes)
  - 59 → 0 (seconds)
  - Cascading second → minute → hour updates


## 🛠 Technical Overview

- Implemented using **C++17**
- Developed in **Microsoft Visual Studio**
- Modular program architecture:
  - `displayMenu()`
  - `displayClocks()`
  - `addHour()`
  - `addMinute()`
  - `addSecond()`
- Clean separation of:
  - function declarations  
  - logic implementation  
  - formatting
- Fully documented using professional C++ commenting standards



## 🚀 How to Build & Run

### ✔ Using Visual Studio
1. Open `ChadaTechClocks.sln`
2. Build → **Build Solution**
3. Run → **Start Without Debugging** (Ctrl + F5)



# ✅ **SECTION 8 — Learning Objectives Demonstrated**

```markdown
## 🎓 Learning Objectives Demonstrated

- Modular C++ program design  
- User interface and control flow  
- Function declarations & definitions  
- Time formatting (12-hour & 24-hour)  
- Increment and rollover logic  
- Input handling  
- Code readability and maintainability  
- Professional software documentation


## 📈 Future Enhancements

- Real-time ticking clock  
- User-defined starting time  
- Logging or time history  
- GUI version using Qt or SFML  
- Packaging as a standalone executable  
- Localization for international use

## 💡 Why This Project Matters

This project demonstrates essential skills for early software engineering roles:

- Modular program architecture  
- Clean, maintainable code  
- Logical time system implementation  
- Clear user interaction design  
- Professional documentation  
- Use of modern C++ standards  

It represents both academic mastery and practical development discipline.


## 🤝 Contributing

Contributions, issues, and feature requests are welcome.  
Feel free to open an issue or submit a pull request.

## 📜 License

This project is licensed under the **MIT License**.



