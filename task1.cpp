#include <iostream>
#include <string>

using namespace std;

int getQuestionCount() {
    return 5;
}

void getQuestions(string questions[], string answers[]) {
    questions[0] = "What is the capital of France?";
    answers[0] = "Paris";

    questions[1] = "What is 5 + 7?";
    answers[1] = "12";

    questions[2] = "What is the largest planet in our solar system?";
    answers[2] = "Jupiter";

    questions[3] = "Who wrote 'To Kill a Mockingbird'?";
    answers[3] = "Harper Lee";

    questions[4] = "What is the chemical symbol for water?";
    answers[4] = "H2O";
}

bool askQuestion(string question, string correctAnswer) {
    string userAnswer;
    cout << question << endl;
    cout << "Your answer: ";
    getline(cin, userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
        return true;
    } else {
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
        return false;
    }
}

int main() {
    int score = 0;
    int questionCount = getQuestionCount();

    string questions[questionCount];
    string answers[questionCount];

    getQuestions(questions, answers);

    for (int i = 0; i < questionCount; i++) {
        if (askQuestion(questions[i], answers[i])) {
            score++;
        }
    }

    cout << "You scored " << score << " out of " << questionCount << "." << endl;

    return 0;
}