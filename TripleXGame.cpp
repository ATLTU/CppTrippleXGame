#include <ctime>
#include "PlayGame.h"
using namespace std;

class BasePointerNum
{
    public:
        BasePointerNum();
        
        BasePointerNum(int one, int two, int three)
        {
            first = one;
            second = two;
            third = three;
        }
            int first;
            int second;
            int third;
    private:
};

class PointerNum : public BasePointerNum
{
    public:
        PointerNum(int one, int two, int three) : BasePointerNum(one, two, three)
        {

        }
        int All()
        {
            return first * second * third;
        }
        int Sum() 
        {
            return first + second + third;
        }
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

    cout << "\n\nCongrats.... The file is empty\n";

    cout << "Press Enter to print Pointer number";
    cin.ignore();

    //Pointer logic
    PointerNum Pointer1(3,5,2);
    PointerNum Pointer2(6,2,1);
    PointerNum *ptrPointerNum;

    ptrPointerNum =&Pointer1;
    cout << "Pointer1: " << ptrPointerNum ->All() << "\n";

    ptrPointerNum =&Pointer2;
    cout << "Pointer2: " << ptrPointerNum ->Sum() << "\n";

    cout << "Press Enter to exit";
    cin.ignore();

    //Static garbage collector
    delete ptrPointerNum;
    return 0;
}