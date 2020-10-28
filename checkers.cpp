
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
 
//REGULAR PROTOTYPES
 
int getxcoord(void);
int getycoord(void);
void showboard(int matrix[8][8]);
char convert(int number);
 
//Checker Piece Class for Inheritance
 
class checkerpiece
{
protected:
    int x;
    int y;
    bool king;
    bool selected;
public:
    int givexposition(void);
    int giveyposition(void);
    void select(void);
    void unselect(void);
    bool whetherselected(void);
    //bool alljump(void);  <- Implement This!
    checkerpiece(int startx, int starty, bool kingship = 0);
};
 
int checkerpiece::givexposition(void)
{
    return(x);
}
 
int checkerpiece::giveyposition(void)
{
    return(y);
}
 
void checkerpiece::select(void)
{
    selected = 1;
}
 
void checkerpiece::unselect(void)
{
    selected = 0;
}
 
bool checkerpiece::whetherselected(void)
{
    return(selected);
}
 
checkerpiece::checkerpiece(int startx, int starty, bool kingship)
{
    x = startx;
    y = starty;
    king = kingship;
}
 
//White Piece
 
class wpiece : public checkerpiece
{
public:
    bool moveup(int nextx, int nexty, int matrix[8][8]);
    bool jumpup(int nextx, int nexty, int matrix[8][8]);
    wpiece(int startx = -1, int starty = -1, bool kingship = 0);
};
 
bool wpiece::jumpup(int nextx, int nexty, int matrix[8][8])
{
    if(nextx == x + 2 && nexty == y + 2 && matrix[x+1][y+1] == 2)
    {
        matrix[x][y] = 0;
        matrix[x+1][y+1] = 0;
        matrix[x+2][y+2] = 1;
 
        x = x+2;
        y = y+2;
        cout << "jumped up right" << endl;
        return(1);
    }
    if(nextx == x - 2 && nexty == y + 2 && matrix[x-1][y+1] == 2)
    {
        matrix[x][y] = 0;
        matrix[x-1][y+1] = 0;
        matrix[x-2][y+2] = 1;
 
        x = x-2;
        y = y+2;
        cout << "jumped up left" << endl;
        return(1);
    }
 
    cout << "No Jump - sorry" << endl;
 
    return(0);
}
 
bool wpiece::moveup(int nextx, int nexty, int matrix[8][8])
{
    if(nextx == x + 1 && nexty == y + 1 && matrix[x][y] == 0)
    {
        cout << matrix[x-1][y-1] << endl;
        matrix[x-1][y-1] = 0;
        matrix[x][y] = 1;
 
        cout << matrix[x][y] << endl;
 
        x++;
        y++;
 
        cout << matrix[x-1][y-1] << endl;
        cout << "moved up right" << endl;
 
        return(1);
    }
    if(nextx == x - 1 && nexty == y + 1 && matrix[x-2][y] == 0)
    {
        matrix[x-1][y-1] = 0;
        matrix[x-2][y] = 1;
 
        x--;
        y++;
        cout << "moved up left" << endl;
        return(1);
    }
 
    cout << "no move - sorry" << endl;
 
    return(0);
}
 
wpiece::wpiece(int startx, int starty, bool kingship):checkerpiece(startx, starty, king)
{
    x = startx;
    y = starty;
    king = kingship;
}
 
//CLASS-RELATED PROTOTYPES
 
void printpieces(wpiece whitepiece[12]);
int findpiece(wpiece whitepiece[12], int x, int y);
 
////////
//MAIN//
////////
 
main()
{
    int matrix[8][8] = {    1,0,1,0,1,0,1,0,
                            0,1,0,1,0,1,0,1,
                            1,0,1,0,1,0,1,0,
                            0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,
                            0,2,0,2,0,2,0,2,
                            2,0,2,0,2,0,2,0,
                            0,2,0,2,0,2,0,2};
    int xposition;
    int yposition;
    int xposition2;
    int yposition2;
    int index;
 
    wpiece whitepiece[12] = {wpiece(1,1,0),wpiece(3,1,0),wpiece(5,1,0),wpiece(7,1,0),wpiece(2,2,0),wpiece(4,2,0),wpiece(6,2,0),wpiece(8,2,0),wpiece(1,3,0),wpiece(3,3,0),wpiece(5,3,0),wpiece(7,3,0)};
     
    printpieces(whitepiece);
 
    bool turn = 0;
 
    showboard(matrix);
 
    while(turn == 0)
    {
        cout << "=-WHITE'S TURN-=" << endl;
        cout << "Enter coordinates of piece to move" << endl;
        xposition = getxcoord();
        yposition = getycoord();
 
 
        while(findpiece(whitepiece, xposition, yposition) == 12)
        {
            cout << "No White Piece found - Enter coordinates of piece to move" << endl;
            xposition = getxcoord();
            yposition = getycoord();
        }
 
        index = findpiece(whitepiece, xposition, yposition);
 
        cout << "Where do you want to move it?" << endl;
        xposition2 = getxcoord();
        yposition2 = getycoord();
 
        cout << xposition2 << ", " << yposition2 << endl;
 
        while(findpiece(whitepiece, xposition2, yposition2) != 12)
        {
            cout << findpiece(whitepiece, xposition2, yposition2) << endl;
            cout << "Already a Piece there - Enter different place to move" << endl;
            xposition2 = getxcoord();
            yposition2 = getycoord();
        }
 
        if(whitepiece[index].jumpup(xposition2, yposition2, matrix) == 0 && whitepiece[index].moveup(xposition2, yposition2, matrix) == 0)
        {
            cout<< "Not a valid move - Enter different place to move" << endl;
        }
 
        showboard(matrix);
    }
 
 
    return (0);
}
 
 
//FUNCTIONS
 
int getxcoord(void)
{
    char letter;
    int x = 9;
 
    cout << "A - H: ";
     
    while(x == 9)
    {
        cin >> letter;
        letter = toupper(letter);
        switch (letter)
        {
            case 'A':   x = 1;
                        break;
            case 'B':   x = 2;
                        break;
            case 'C':   x = 3;
                        break;
            case 'D':   x = 4;
                        break;
            case 'E':   x = 5;
                        break;
            case 'F':   x = 6;
                        break;
            case 'G':   x = 7;
                        break;
            case 'H':   x = 8;
                        break;
            default :   cout << "Please give a letter from A to H: ";
        }
    }
 
    return(x);
}
 
int getycoord(void)
{
    int y = 9;
 
    cout << "1 - 8: ";
    cin >> y; 
    while(y < 1 || y > 8)
    {
        cout << "Please give a number from 1 to 8: ";
        cin >> y;
    }
 
    return(y);
}
 
int findpiece(wpiece whitepiece[12], int x, int y)
{
    int finder;
 
    for (finder = 0; finder < 12; finder++)
    {
        if (whitepiece[finder].givexposition() == x && whitepiece[finder].giveyposition() == y)
        {
            whitepiece[finder].select();
            return(finder);
        }
    }
 
    return(finder);
}
 
void showboard(int matrix[8][8])
{
    int bigcount;
    int counter;
 
    cout <<  "|----|----|----|----|----|----|----|----|" << endl;
 
    for(bigcount = 7; bigcount >= 0; bigcount--)
    {
        for(counter = 0; counter < 8; counter++)
        {
            cout << "| " << convert(matrix[bigcount][counter]) << "  ";
        }
 
        cout <<  "|" << endl << "|----|----|----|----|----|----|----|----|" << endl;
    }
}
 
char convert(int number)
{
    switch(number)
    {
        case 0  :   return(' ');
                    break;
        case 1  :   return('w');
                    break;
        case 2  :   return('b');
                    break;
        case 3  :   return('W');
                    break;
        case 4  :   return('B');
                    break;
        default :   return('!');
    }
}
 
 
void printpieces(wpiece whitepiece[12])
{
    int count;
 
    for(count = 0; count < 12; count++)
    {
        cout << "White Piece Index Number " << count << " has coordinates: " << whitepiece[count].givexposition() << ", " << whitepiece[count].giveyposition() << endl;
    }
}