#include <ctime>
#include "PlayGame.h"
using namespace std;

class PointerNum
{
    public:
        PointerNum(int one = 1, int two = 2, int three = 3)
        {
            first = one;
            second = two;
            third = three;
        }
        int All()
        {
            return first * second * third;
        }
    private:
        int first;
        int second;
        int third;
};

int main()
{
    srand(time(NULL)); //Create new random based on time of day

    int LevelDifficulity = 1;
    const int MaxDifficulity = 5;

    while (LevelDifficulity <= MaxDifficulity) //Loops the game until all lavels are completed
    {
        
        bool bLevelComplete = PlayGame(LevelDifficulity);
        
        cin.clear(); //Clears any error
        cin.ignore(); //Discards the buffer

        if (bLevelComplete)
        {
            LevelDifficulity++;
        }    
    }

    cout << "\n\nCongrats you went throw all folders.... The folders are empty\n";

    cout << "Press Enter to print Pointer number";
    cin.ignore();

    //Pointer logic
    PointerNum Pointer1(3,5,2);
    PointerNum Pointer2(6,2,1);
    PointerNum *ptrPointerNum;

    ptrPointerNum =&Pointer1;
    cout << "Pointer1: " << ptrPointerNum ->All() << "\n";

    ptrPointerNum =&Pointer2;
    cout << "Pointer2: " << ptrPointerNum ->All() << "\n";

    cout << "Press Enter to exit";
    cin.ignore();

    delete ptrPointerNum;
    return 0;
}