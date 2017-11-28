#ifndef EX2_HUMAN_H
#define EX2_HUMAN_H

#include <iostream>
#include "Board.h"
#include "vector"
#include "Player.h"
#include <limits>
#include "Move.h"

using namespace std;
/************************
 * class Human is a type of player that makes his move according to
 * the user's input and not automaticly (like an A.I).
 */
class Human: public Player {
public:
    /*******************
     * constructor
     * @param s side
     */
    Human(Side s);
    /*****************
     * Function name: doMove
     * @param options , vector holding optional moves.
     * @return a Move of the chosen move.
     ******************/
    virtual Move* doMove(const vector<Move*> &options);
=======
#include "Point.h"
#include "vector"
#include "Player.h"
#include <limits>
using namespace std;
/************************
 * class Human is a type of player that makes his move according to
 * the user's input and not automaticly (like an A.I).
 */
class Human: public Player {
public:
    /*******************
     * constructor
     * @param s side
     */
    Human(Side s);
    /*****************
     * Function name: doMove
     * @param options , vector holding optional moves.
     * @return a point of the chosen move.
     ******************/
    virtual Point* doMove(const vector<Point*> &options);
>>>>>>> branch 'master' of https://github.com/Jed-El/ex3
private:
    Side s;
};


#endif //EX2_HUMAN_H