#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum enQuestionLevel
{
    Easy = 1,
    Medium = 2,
    Hard = 3
};

enum enOperationType
{
    Add = 1,
    Subtract = 2,
    Multiply = 3,
    Divide = 4
};

enum enRightOrWrongAnswer
{
    RightAnswer = 1,
    WrongAnswer = 2
};

struct stRoundStats
{
    int rightAnswerIs = 0;
    enRightOrWrongAnswer rigthOrWrong;
};

struct stGameStats 
{
    short numberOfQuestions = 0;
    enQuestionLevel questionLevel;
    enOperationType opType;
    short rightAnswers = 0;
    short wrongAnswers = 0;
};

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

short howManyQuestions()
{
    short qs = 0;

    do
    {
        cout << "How Many Questions from 1 to 10: ";
        cin >> qs;
    } while (qs < 1 || qs > 10);

    return qs;
}

enQuestionLevel readQuestionLevel()
{
    short lvl = 0;

    do
    {
        cout << "Question level [1]:Easy, [2]:Meduim, [3]:Hard: ";
        cin >> lvl;
    } while (lvl < 1 || lvl > 4);

    return (enQuestionLevel)lvl;
}

enOperationType readOperationType()
{
    short op = 0;

    do
    {
        cout << "Operation Type [1]:Add, [2]:Subtract, [3]:Multiply, [4]:Divide :  ";
        cin >> op;
    } while (op < 1 || op > 5);

    return (enOperationType)op;
}

int generateNumbersByLevel(enQuestionLevel lvl)
{
    switch (lvl)
    {
    case Easy:
        return randomNumber(1, 10);
        break;
    case Medium:
        return randomNumber(1, 100);
        break;
    case Hard:
        return randomNumber(1, 1000);
        break;
    }
}

char generateOpTypeByChoice(enOperationType opType)
{
    switch (opType)
    {
    case Add:
        return '+';
        break;
    case Subtract:
        return '-';
        break;
    case Multiply:
        return '*';
        break;
    case Divide:
        return '/';
        break;
    }
}

enRightOrWrongAnswer checkRightAnswers(int rightAnswers, int answer)
{
    if (rightAnswers == answer)
    {
        return RightAnswer;
    }
    else
    {
        return WrongAnswer;
    }
}

void notifyForRightAndWrong(int rightAnswers, int answer)
{
    if (checkRightAnswers(rightAnswers, answer) == RightAnswer)
    {
        system("COLOR 2F");
        cout << "\n Right Answer \n";
    }
    else
    {
        cout << "\a";
        system("COLOR 4F");
        cout << "\n Wrong Answer \n";
    }
}

stGameStats fillGameStats(stRoundStats roundStats, int rightAnswer, int wrongAnswer, short questions, enQuestionLevel lvl, enOperationType opType)
{
    stGameStats gameStats;

    gameStats.numberOfQuestions = questions;
    gameStats.questionLevel = lvl;
    gameStats.opType = opType;
    gameStats.rightAnswers = rightAnswer;
    gameStats.wrongAnswers = wrongAnswer;

    return gameStats;
}

stGameStats playGame(enOperationType opType, enQuestionLevel lvl, short questions)
{
    stRoundStats roundStats;
    int number1 = 0, number2 = 0 , answer = 0 , rightAnswer = 0, wrongAnswer = 0;

    for (short i = 1; i <= questions; i++)
    {
        number1 = generateNumbersByLevel(lvl);
        number2 = generateNumbersByLevel(lvl);

        switch (opType)
        {
        case Add:
            cout << "\n" << number1 << endl << number2 << " " << "+" << endl << "_______________" << endl;
            cin >> answer;
            roundStats.rightAnswerIs = (number1 + number2);
            notifyForRightAndWrong(roundStats.rightAnswerIs, answer);
            break;
        case Subtract:
            cout << "\n" << number1 << endl << number2 << " " << "-" << endl << "_______________" << endl;
            cin >> answer;
            roundStats.rightAnswerIs = (number1 - number2);
            notifyForRightAndWrong(roundStats.rightAnswerIs, answer);
            break;
        case Multiply:
            cout << "\n" << number1 << endl << number2 << " " << "*" << endl << "_______________" << endl;
            cin >> answer;
            roundStats.rightAnswerIs = (number1 * number2);
            notifyForRightAndWrong(roundStats.rightAnswerIs, answer);
            break;
        case Divide:
            cout << "\n" << number1 << endl << number2 << " " << "/" << endl << "_______________" << endl;
            cin >> answer;
            roundStats.rightAnswerIs = (number1 / number2);
            notifyForRightAndWrong(roundStats.rightAnswerIs, answer);
            break;
        }

        if (checkRightAnswers(roundStats.rightAnswerIs, answer) == RightAnswer)
            rightAnswer++;
        else
            wrongAnswer++;
    }

    return fillGameStats(roundStats, rightAnswer, wrongAnswer, questions, lvl, opType);
}

string getLvl(enQuestionLevel lvl)
{
    switch (lvl)
    {
    case Easy:
        return "Easy";
        break;
    case Medium:
        return "Medium";
        break;
    case Hard:
        return "Hard";
        break;
    }
}

string getOpType(enOperationType type)
{
    switch (type)
    {
    case Add:
        return "Add";
        break;
    case Subtract:
        return "Subtract";
        break;
    case Multiply:
        return "Multiply";
        break;
    case Divide:
        return "Divide";
        break;
    }
}

void showGamePassedScreen(stGameStats game)
{
    if (game.rightAnswers > game.wrongAnswers)
    {
        system("COLOR 2F");
        cout << "\n_____________________________________________________\n";
        cout << "\n                    Quiz Passed :-)                  \n";
        cout << "\n_____________________________________________________\n";
    }
    else if (game.rightAnswers < game.wrongAnswers)
    {
        system("COLOR 4F");
        cout << "\n_____________________________________________________\n";
        cout << "\n                    Quiz Failed :-(                  \n";
        cout << "\n_____________________________________________________\n";
    }
    else
    {
        system("COLOR 6F");
        cout << "\n_____________________________________________________\n";
        cout << "\n               Better Next Time :-|                  \n";
        cout << "\n_____________________________________________________\n";
    }
}

void showFinalResults(stGameStats game)
{
    cout << "\n*****************************************************************\n";
    cout << " Number Of Questions     : " << game.numberOfQuestions << endl;
    cout << " Questions Level         : " << getLvl(game.questionLevel) << endl;
    cout << " Operation Type          : " << getOpType(game.opType) << endl;
    cout << " Number Of Right Answers : " << game.rightAnswers << endl;
    cout << " Number Of Wrong Answers : " << game.wrongAnswers << endl;
    cout << "\n*****************************************************************\n";
}

void resetScreen()
{
    system("cls");
    system("Color 0F");
}

void startGame()
{
    char playAgain = 'Y';
    stGameStats game;
    enQuestionLevel lvl;
    enOperationType op;


    do
    {
        resetScreen();

        game.numberOfQuestions = howManyQuestions();
        lvl = readQuestionLevel();
        op = readOperationType();

        game = playGame(op,lvl, game.numberOfQuestions);
        showGamePassedScreen(game);
        showFinalResults(game);

        cout << "Do you want to play again? Y/N? ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));

    startGame();

    return 0;
}