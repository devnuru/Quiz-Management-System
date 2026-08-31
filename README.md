# Quiz Management System

A comprehensive C-based quiz management system that allows users to take interactive quizzes with immediate feedback and performance scoring.

## 📋 Description

The Quiz Management System is a command-line application written in C that enables users to participate in multiple-choice quizzes. The system evaluates user responses, calculates scores, and provides letter grades with personalized feedback based on performance.

## ✨ Features

- **Interactive Quiz Interface**: User-friendly command-line interface for taking quizzes
- **Multiple Choice Questions**: Questions with four answer options (A, B, C, D)
- **Input Validation**: Robust validation to ensure only valid answers are accepted
- **Instant Feedback**: Immediate feedback after each answer (correct/incorrect)
- **Performance Scoring**:
  - Calculates total score and percentage
  - Assigns letter grades (A+, A, B, C, D, F)
  - Tracks correct and incorrect answers
- **Personalized Messages**: Tailored feedback messages based on final grade
- **Error Handling**: Graceful handling of invalid inputs with retry prompts

## ⚡ Quick Start

```bash
# 1. Navigate to project directory
cd quiz-management-system

# 2. Compile the program
gcc app.c -o app

# 3. Run the quiz
./app

# 4. Answer the questions (enter A, B, C, or D)
# 5. View your results!
```

## 🛠️ Requirements

- **C Compiler**: GCC or any ANSI C compliant compiler
- **Operating System**: Linux, macOS, or Windows (with appropriate compiler)
- **Standard Libraries**:
  - `stdio.h` (Standard I/O)
  - `ctype.h` (Character type checking)
  - `string.h` (String manipulation)

## 📦 Installation

1. **Clone or Download** the project files to your local machine:

   ```bash
   cd quiz-management-system
   ```

2. **Verify** all source files are present:
   - `app.c` - Main quiz program

## 🚀 Compilation & Execution

### Step 1: Compile the Program

Open your terminal and navigate to the project directory:

```bash
cd quiz-management-system
```

Compile using GCC:

```bash
gcc app.c -o app
```

For a more thorough compilation with warnings enabled:

```bash
gcc -Wall -Wextra app.c -o app
```

### Step 2: Run the Program

Execute the compiled program:

```bash
./app
```

On Windows (with MinGW):

```bash
app.exe
```

### Screenshot: Program Startup

```
#############
Quiz Management System
#############
Answer each question by entering A, B, C, D.

Question 1 of 5
Which of the following is used to create single character in C?
A. int
B. Char
C. float
D. double
Enter Your Answer (A-D):
```

## ❓ Quiz Questions

This quiz contains **5 C Programming questions**:

### **Question 1**

**Which of the following is used to create single character in C?**

- A. int
- B. Char ✓ (Correct Answer)
- C. float
- D. double

### **Question 2**

**Which keyword is used to create a function in C?**

- A. function
- B. define
- C. int ✓ (Correct Answer)
- D. Function

### **Question 3**

**What does printf do in C?**

- A. Reads input
- B. Performs Math
- C. Prints Output ✓ (Correct Answer)
- D. Creates Loop

### **Question 4**

**Which symbol is used for a single-line comment in C?**

- A. // ✓ (Correct Answer)
- B. /\*
- C. #
- D. %

### **Question 5**

**Which loop executes at least once before checking the condition?**

- A. for
- B. while
- C. do-while ✓ (Correct Answer)
- D. if

## 📖 How to Use

### Step-by-Step Usage

1. **Start the Program**: Run the compiled executable
2. **Read Instructions**: Follow the on-screen prompts carefully
3. **Answer Questions**: For each question, enter the letter of your chosen answer (A, B, C, or D)
4. **Invalid Input Handling**: If you enter an invalid response, the system will prompt you to try again
5. **View Results**: After completing all questions, your final score, percentage, and grade will be displayed

### Complete Example: Full Quiz Session

#### Starting the Quiz

```
$ ./my

#############
Quiz Management System
#############
Answer each question by entering A, B, C, D.

Question 1 of 5
Which of the following is used to create single character in C?
A. int
B. Char
C. float
D. double
Enter Your Answer (A-D): b
Correct! Great job.

```

#### Question 2

```
Question 2 of 5
Which keyword is used to create a function in C?
A. function
B. define
C. int
D. Function
Enter Your Answer (A-D): c
Correct! Great job.

```

#### Question 3

```
Question 3 of 5
What does printf do in C?
A. Reads input
B. Performs Math
C. Prints Output
D. Creates Loop
Enter Your Answer (A-D): a
Incorrect. The correct answer is C.

```

#### Question 4

```
Question 4 of 5
Which symbol is used for a single-line comment in C?
A. //
B. /*
C. #
D. %
Enter Your Answer (A-D): a
Correct! Great job.

```

#### Question 5

```
Question 5 of 5
Which loop executes at least once before checking the condition?
A. for
B. while
C. do-while
D. if
Enter Your Answer (A-D): c
Correct! Great job.

```

#### Final Results

```
############
FINAL RESULT
############
Correct Answers: 4
Incorrect Answers: 1
Total Score: 4 / 5
Percentage: 80.00%
Grade: A
Good job! You have a good understanding.
```

### Invalid Input Example

If you enter an invalid answer:

```
Enter Your Answer (A-D): E
Invalid input! Please Enter A, B, C, or D only.
Enter Your Answer (A-D): AB
Invalid input! Please Enter A, B, C, or D only.
Enter Your Answer (A-D): a
Correct! Great job.
```

## 📊 Grading Scale

| Grade | Percentage | Description                          |
| ----- | ---------- | ------------------------------------ |
| A+    | 90-100%    | Excellent work! Strong understanding |
| A     | 80-89%     | Good understanding                   |
| B     | 70-79%     | Passed, room for improvement         |
| C     | 60-69%     | Need to study more                   |
| D     | 50-59%     | Need to work hard to improve         |
| F     | Below 50%  | Did not pass                         |

## 📸 Visual Walkthrough

### Program Output Screenshots

#### Screen 1: Quiz Start

```
========================================================
$ gcc app.c -o app && ./app
========================================================

#############
Quiz Management System
#############
Answer each question by entering A, B, C, D.

Question 1 of 5
Which of the following is used to create single character in C?
A. int
B. Char
C. float
D. double
Enter Your Answer (A-D): _
```

#### Screen 2: During Quiz (Correct Answer)

```
Question 2 of 5
Which keyword is used to create a function in C?
A. function
B. define
C. int
D. Function
Enter Your Answer (A-D): c
✓ Correct! Great job.

Question 3 of 5
What does printf do in C?
A. Reads input
B. Performs Math
C. Prints Output
D. Creates Loop
Enter Your Answer (A-D): _
```

#### Screen 3: Incorrect Answer with Retry

```
Question 4 of 5
Which symbol is used for a single-line comment in C?
A. //
B. /*
C. #
D. %
Enter Your Answer (A-D): z
Invalid input! Please Enter A, B, C, or D only.
Enter Your Answer (A-D): a
✓ Correct! Great job.
```

#### Screen 4: Quiz Completion & Results

```
############
FINAL RESULT
############
Correct Answers: 4
Incorrect Answers: 1
Total Score: 4 / 5
Percentage: 80.00%
Grade: A
Good job! You have a good understanding.
========================================================
```

#### Screen 5: Perfect Score Example

```
############
FINAL RESULT
############
Correct Answers: 5
Incorrect Answers: 0
Total Score: 5 / 5
Percentage: 100.00%
Grade: A+
Excellent work! You have a strong understanding.
========================================================
```

## 🏗️ Project Structure

```
quiz-management-system/
├── app.c             # Main quiz application
├── README.md         # This file
└── [compiled files]  # app (executable)
```

## 🔄 Program Flow

```
┌─────────────────────────────────────┐
│    START QUIZ APPLICATION           │
└─────────────────┬───────────────────┘
                  │
                  ▼
        ┌─────────────────────┐
        │  Display Quiz Info  │
        └─────────┬───────────┘
                  │
                  ▼
        ┌─────────────────────────────┐
        │  Loop Through Questions     │
        │  (5 Questions Total)        │
        └─────────┬───────────────────┘
                  │
         ┌────────┴────────┐
         │                 │
         ▼                 ▼
    ┌─────────┐   ┌────────────────┐
    │ Question │   │ Read Answer    │
    │ Display  │──▶│ Validate Input │
    └─────────┘   └────────┬───────┘
                           │
                    ┌──────┴──────┐
                    │ Valid Input?│
                    └──────┬──────┘
                      No ▲  │Yes
                         │  │
                    Invalid  ▼
                    Prompt  Compare
                         │  with Answer
                         │  │
                    ┌─────┼──────┐
                    │     │      │
              Incorrect  Correct
                    │     │
                    └─────┴──────┐
                                 │
                          Update Score
                                 │
                    ┌────────────┴─────────────┐
                    │                          │
            More Questions?            No
                    │                          │
                   Yes                        │
                    │                          │
                    │                          ▼
                    │                  ┌─────────────────┐
                    │                  │ Calculate Grade │
                    │                  │ & Percentage    │
                    │                  └────────┬────────┘
                    │                           │
                    │                           ▼
                    │                  ┌─────────────────────┐
                    │                  │ Display Final Result│
                    │                  │ & Personalized Msg  │
                    │                  └────────┬────────────┘
                    │                           │
                    └───────────────────────────┤
                                                │
                                                ▼
                                    ┌──────────────────────┐
                                    │  END QUIZ APPLICATION│
                                    └──────────────────────┘
```

## 💡 Key Functions

### `const char *getGrade(float percentage)`

Converts a percentage score to a letter grade.

- **Parameters**: `percentage` - The quiz score as a percentage
- **Returns**: Pointer to grade string ("A+", "A", "B", "C", "D", or "F")

### `void readAnswer(char *answer)`

Reads and validates user input for quiz answers.

- **Parameters**: `answer` - Pointer to store the user's answer
- **Validation**: Ensures input is a single character between A-D

### `int main(void)`

Main program loop that:

1. Displays quiz questions
2. Collects user answers
3. Validates responses
4. Calculates final score
5. Displays results and feedback

## 🔧 Customization

### Adding More Questions

Edit the `quiz[]` array in `app.c`:

```c
{
    "Your question here?",
    {
        "A. Option 1", "B. Option 2", "C. Option 3", "D. Option 4"
    },
    'B'  // Correct answer
}
```

Then recompile and run.

## 📝 Data Structures

### Question Structure

```c
struct Question {
    char question[100];      // Question text (max 100 chars)
    char option[4][40];      // Four options (max 40 chars each)
    char correctAnswer;      // Correct answer (A, B, C, or D)
};
```

## ⚠️ Known Limitations

- Questions and answers are hardcoded (not loaded from external files)
- Single quiz session only
- No data persistence between sessions
- Limited to ASCII characters

## 🚀 Future Improvements

- [ ] Load quiz questions from external files (JSON/CSV)
- [ ] Support for multiple quiz sets
- [ ] Time-based quiz challenges
- [ ] Save quiz results to file
- [ ] User login and progress tracking
- [ ] Dynamic question selection
- [ ] Admin panel for adding questions

## 🧪 Testing

Run the program and test with various inputs:

- Valid answers: A, B, C, D
- Invalid answers: E, F, X (should prompt to retry)
- Edge cases: Empty input, multiple characters

## 📄 License

This project is open source and available for educational purposes.

## 👨‍💻 Author

Created as an educational C programming project.

## 🤝 Contributing

Feel free to fork this project and submit improvements!

---

**Last Updated**: August 31, 2026

For issues or questions, please review the source code comments or refer to C programming documentation.
