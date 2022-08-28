#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum RockPapperScissors { Rock = 1, Papper = 2, Scissors = 3};

struct stGameInfo
{
    short gameRounds = 0;
    short playerWins = 0;
    short compWins = 0;
    short gameDraws = 0;
    string whoWins = "";
};

string printRockPapperScissors(RockPapperScissors choice)
{
    switch (choice)
    {
    case Rock:
        return "Rock";
    case Papper:
        return "Papper";
    case Scissors:
        return "Scissors"; 
    }
}

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;

    } while (number < 0);

    return number;
}

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

RockPapperScissors getPlayerChoice()
{
    int playerChoice = 0;

    cout << "\nYour Choice: [1]:Rock, [2]:Papper, [3]:Scissors ? ";
    cin >> playerChoice;

    return (RockPapperScissors)playerChoice;
}

RockPapperScissors getComputerChoice()
{
    int compChoice = 0;

    compChoice = randomNumber(1, 3);

    return (RockPapperScissors)compChoice;
}

stGameInfo gameStats(stGameInfo gameInfo, RockPapperScissors player, RockPapperScissors computer)
{
    if (player == RockPapperScissors::Papper && computer == RockPapperScissors::Papper)
    {
        ++gameInfo.gameDraws;
        gameInfo.whoWins = "[No Winner]";
    }
    else if (player == RockPapperScissors::Rock && computer == RockPapperScissors::Rock)
    {
        ++gameInfo.gameDraws;
        gameInfo.whoWins = "[No Winner]";
    }
    else if (player == RockPapperScissors::Scissors && computer == RockPapperScissors::Scissors)
    {
        ++gameInfo.gameDraws;
        gameInfo.whoWins = "[No Winner]";
    }

    else if (player == RockPapperScissors::Papper && computer == RockPapperScissors::Rock)
    {
        ++gameInfo.playerWins;
        gameInfo.whoWins = "[Player]";

    }
    else if (player == RockPapperScissors::Rock && computer == RockPapperScissors::Scissors)
    {
        ++gameInfo.playerWins;
        gameInfo.whoWins = "[Player]";

    }
    else if (player == RockPapperScissors::Scissors && computer == RockPapperScissors::Papper)
    {
        ++gameInfo.playerWins;
        gameInfo.whoWins = "[Player]";

    }

    else if (computer == RockPapperScissors::Papper && player == RockPapperScissors::Rock)
    {
        ++gameInfo.compWins;
        gameInfo.whoWins = "[Computer]";

    }
    else if (computer == RockPapperScissors::Rock && player == RockPapperScissors::Scissors)
    {
        ++gameInfo.compWins;
        gameInfo.whoWins = "[Computer]";
    }
    else if (computer == RockPapperScissors::Scissors && player == RockPapperScissors::Papper)
    {
        ++gameInfo.compWins;
        gameInfo.whoWins = "[Computer]";

    }

    return gameInfo;
}

string finalWinner(stGameInfo gameStats)
{
    if (gameStats.playerWins > gameStats.compWins)
    {
        return "Player";
    }
    else if (gameStats.playerWins < gameStats.compWins)
    {
        return "Computer";
    }
    else
    {
        return "No Winner";
    }

}

string printWinnerWithReactions(stGameInfo game)
{
    if (game.whoWins == "[Player]")
    {
        system("COLOR 2F");
        return "Player";
    }
    else if (game.whoWins == "[Computer]")
    {
        system("COLOR 4F");
        return "\aComputer";
    }
    else
    {
        system("COLOR 6F");
        return "No Winner";
    }
}

void showGameResults(stGameInfo gameStats)
{
    cout << "\n\n\t\t__________________ [Game Results] ______________________\n\n";
    cout << "\t\tGame Rounds         : " << gameStats.gameRounds << endl;
    cout << "\t\tPlayer Won Times    : " << gameStats.playerWins << endl;
    cout << "\t\tComputer Won Times  : " << gameStats.compWins << endl;
    cout << "\t\tDraw Times          : " << gameStats.gameDraws << endl;
    cout << "\t\tFinal Winner        : " << finalWinner(gameStats) << endl;
    cout << "\t\t____________________________________________________________\n\n";
}

void resetGame()
{
    stGameInfo game;

    game.gameRounds = 0;
    short playerWins = 0;
    short compWins = 0;
    game.gameDraws = 0;
    game.whoWins = "";
}

void startGame()
{
    stGameInfo game;
    char reset = 'A';

    RockPapperScissors playerChoice;
    RockPapperScissors compChoice;

        
        
    game.gameRounds = readPositiveNumber("Enter How Many Rounds 1 to 10: ");

    for (int i = 1; i <= game.gameRounds; i++)
    {
        cout << "\nRound [" << i << "] begins: " << endl;

        playerChoice = getPlayerChoice();
        compChoice = getComputerChoice();

        game = gameStats(game, playerChoice, compChoice);


        cout << "\n_____________________ Round [" << i << "] _____________________\n";
        cout << "Player Choice: " << printRockPapperScissors(playerChoice) << endl;
        cout << "Computer Choice: " << printRockPapperScissors(compChoice) << endl;
        cout << "Round Winner: " << printWinnerWithReactions(game) << endl;
        cout << "\n_______________________________________________________________\n";
    }

    showGameResults(game);

    cout << "\t\tDo You Want To Quit The Game (y/n): ";
    cin >> reset;
    if (reset == 'y' || reset == 'Y')
    {
        resetGame();
    }
    else
    {
        resetGame();
        system("CLS");
        startGame();
    }


}


int main()
{
    srand((unsigned)time(NULL));

    startGame();
  
    return 0;
}
