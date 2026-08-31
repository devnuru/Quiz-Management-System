#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
Structure to store one question, four options, and correct answer
*/

struct Question {
    char question[100];
    char option[4][40];
    char correctAnswer;
};

// Quiz Questions
struct Question quiz[] = {
    {
        "Which of the following is used to create single character in C?",
        {
            "A. int", "B. Char", "C. float", "D. double" 
        },
        'B'
    },
    {
        "Which keyword is used to create a function in C?",
        {
            "A. function", "B. define", "C. int", "D. Function"
        },
        'C'
    },
    {
        "What does printf do in C?",
        {
            "A. Reads input", "B. Performs Math", "C. Prints Output", "D. Creates Loop"
        },
        'C'
    },
    {
        "Which symbol is used for a single-line comment in C?",
        {
            "A. //", "B. /*", "C. #", "D. %"
        },
        'A'

    },
    {
        "Which loop executes at least once before checking the condition?",
        {
            "A. for", "B. while", "C. do-while", "D. if"
        },
        'C'
    }
};

// Total Question in this Quiz
int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);

// Function for assign a grade based on Percentage 

const char *getGrade(float percentage) {
 if(percentage >= 90) return "A+";
 if(percentage >= 80) return "A";
 if(percentage >= 70) return "B";
 if(percentage >= 60) return "C";
 if(percentage >= 50) return "D";
 return "F";
}

// Read and Validate the user's answer
void readAnswer(char * answer) {
    char input[20];

    while(1) {
        printf("Enter Your Answer (A-D): ");
        
        // Read the input as text 
        if(!fgets(input, sizeof(input), stdin)) {
            printf("Input Error. Please try again. \n");
            continue;
        }

        // Remove the Enter key from the input
        input[strcspn(input, "\n")] = '\0';

        // Make sure the user entered only one character
        if(strlen(input) == 1) {
            *answer = toupper((unsigned char)input[0]);

            if(*answer >= 'A' && *answer <= 'D') {
                return;
            }
        }
        
        printf("Invalid input! Please Enter A, B, C, or D only. \n");
    }
}

int main(void) {
    int score = 0;
    int correct = 0;
    int incorrect = 0;
    char userAnswer;


    printf("############# \n");
    printf("Quiz Management System \n");
    printf("############# \n");

    printf("Answer each question by entering A, B, C, D. \n\n");

    // Showing each Question One by One
    for(int i = 0; i < totalQuestions; i++) {
      printf("Question %d of %d\n", i + 1, totalQuestions );
      printf("%s\n", quiz[i].question);
    
      //Print all answer options
      for(int j= 0; j<4; j++) {
        printf("%s\n", quiz[i].option[j]);
    }

    // Get the user's answer
    readAnswer(&userAnswer);

    //Check the answer
    if(userAnswer == quiz[i].correctAnswer) {
        score++;
        correct++;
        printf("Correct! Great job. \n\n");
    } else {
        incorrect++;
        printf("Incorrect. The correct answer is %c.\n\n", quiz[i].correctAnswer);
    }
}

    // Calculate the final percentage
    float percentage = ((float)score / totalQuestions) * 100.00;
    const char *grade = getGrade(percentage);

    printf("############\n");
    printf("FINAL RESULT \n");
    printf("############\n");
    printf("Correct Answers: %d\n", correct);
    printf("Incorrect Answers: %d\n", incorrect);
    printf("Total Score: %d / %d \n", score, totalQuestions);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %s\n", grade);

   // Final message
   if(strcmp(grade, "A+") == 0) {
     printf("Excellent work! You have a strong understanding\n");
   } else if(strcmp(grade, "A") == 0) {
     printf("Good job! You have a good understanding.\n");
   } else if(strcmp(grade, "B") == 0) {
     printf("You passed, but you should improve\n");
    } else if(strcmp(grade, "C") == 0) {
     printf("You need to study more.\n");
   } else if(strcmp(grade, "D") == 0) {
     printf("You need to work hard to improve \n");
   } else {
     printf("You failed. Please study and try again.\n");
   }
 return 0;
}