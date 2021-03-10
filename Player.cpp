#include "Player.h"



Player::Player() : _nom ("sleepy")
{
    
}

std::string Player::getNom()
{
    return _nom;
}

std::int16_t Player::getScore0()
{
    return _score0;
}

std::int16_t Player::getScore1()
{
    return _score1;
}

std::int16_t Player::getScore2()
{
    return _score2;
}

std::int16_t Player::getScore3()
{
    return _score3;
}

std::int16_t Player::getScore4()
{
    return _score4;
}

std::int16_t Player::getMoyenne()
{
 int moyenne = (_score0 + _score1+ _score2+_score3+_score3+_score4) / 5;
    return moyenne ;
}
