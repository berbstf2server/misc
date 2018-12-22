#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int cardNumber = 0;
	cout << "Enter the number of flashcards you need: ";
	cin >> cardNumber;

	char questions[cardNumber][20] = {'\0'};
	char answers[cardNumber][20] = {'\0'};

	int currentQuestion = 0;
	

	questionInput:
	if (currentQuestion + 1 > cardNumber)
		goto answerInput;
	else
		cout << "Enter A question for card #" << currentQuestion + 1 << " (maximum 20 characters): ";
		cin >> questions[currentQuestion];
		cout << "Enter an answer for '" << questions[currentQuestion] << "':";
		cin >> answers[currentQuestion];
		currentQuestion = ++currentQuestion;
		goto questionInput;
	
	answerInput:

	return 0;
}
