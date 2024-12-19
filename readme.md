# Campus Connect  

**Campus Connect** is a social network-style application designed for college students to connect and collaborate on their campus. It’s built using the **Qt Framework**, **C++**, and **SQLite**, combining modern design and functionality to enhance campus life.  

The goal of Campus Connect is to make campus life easier by enabling students to assist each other with food delivery and stay updated about ongoing events. The app encourages communication and teamwork while offering useful tools like a live location map and chat features to connect users in real-time.  

---

## Inspiration for Campus Connect  

On college campuses, effective communication is essential for students to navigate their busy schedules and responsibilities. Whether it’s picking up food from a popular store or staying informed about campus events, collaboration among students can make life easier. **Campus Connect** bridges this gap by providing a platform where students can help each other, stay informed, and build a stronger community.  

---

## Project Description  

Campus Connect lets students:  
- Post and view food delivery requests.  
- Share and explore updates about campus events.  
- View a social network-style feed for easy interaction.  
- Use a secure QR-based verification system for deliveries.  

**Database File Location**: The application stores its data in a local SQLite database file named `campus_connect.db`, located in the project directory. This file is essential for managing user information, requests, and event details.  

Future updates will include a live GPS map to track all users on campus and a chat feature for direct messaging. These features aim to make student collaboration seamless and enjoyable.  

---
## SQLite Configuration  

To configure the SQLite database for this project:  
1. **Database File Setup**:  
   - Ensure the database file `/SQLite/auth.db` exists in the project directory. If it does not, the application will attempt to create it during the first run.  

2. **Database Schema**:  
   -  `username`,  `password`
3. **Dependencies**:  
   - Make sure SQLite is installed and accessible. For most platforms, SQLite is bundled with the C++ standard library, so no additional installation is required.  

## Challenges  

1. **Learning the Qt Framework:**  
   Adapting to Qt’s syntax and structure was initially challenging, but studying the API documentation, watching YouTube tutorials, and consulting Stack Overflow solutions helped significantly. Trial and error, especially with pointers and vectors, was also a valuable learning process.  

2. **Directory Management:**  
   To streamline file handling across multiple classes, a directory management class was created. This centralized approach reduced repetitive work and simplified updating directories when moving between systems.  

3. **UI Design Issues:**  
   Implementing custom frameless windows caused some usability issues, like making the app window immovable. Stack Overflow solutions, credited within the code, provided effective fixes.  

4. **Database Integration:**  
   Managing the SQLite database file and ensuring smooth interaction between the database and the application logic was a learning curve. Techniques like prepared statements were utilized to prevent SQL injection and ensure efficient querying.  

---

## Accomplishments  

- Successfully designed and developed a working prototype using C++ and Qt.  
- Implemented advanced programming techniques to create a clean and user-friendly interface.  
- Integrated SQLite for robust database management to handle user data efficiently.  
- Learned and applied the Qt Framework to solve real-world problems.  

---

## Future Directions  

1. **Live GPS Map:**  
   Add a map to display the real-time location of all users on campus for easier collaboration and connection.  

2. **Chat Feature:**  
   Enable direct messaging between users to simplify coordination for food deliveries and event planning.  

3. **Additional Features:**  
   Explore gamification ideas, like badges for frequent helpers, to encourage engagement and collaboration.  

---


Campus Connect is designed to enhance campus life by promoting teamwork, improving communication, and making everyday tasks more manageable.
