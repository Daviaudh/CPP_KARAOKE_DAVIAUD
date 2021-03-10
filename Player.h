#include <string>

class Player
{
    private:
        std::string _nom;
        std::int16_t _score0;
        std::int16_t _score1;
        std::int16_t _score2;
        std::int16_t _score3;
        std::int16_t _score4;
        

    public:
        std::string getNom();
        std::int16_t getScore0();
        std::int16_t getScore1();
        std::int16_t getScore2();
        std::int16_t getScore3();
        std::int16_t getScore4();
        
        std::int16_t getMoyenne();
        
        void setNom(std::string newName);

        std::string Player(std::string _name, int _score1, int _score2, int _score3,int _score4, int _score5);
        
};

class Karaoke
{
private:
    std::string _nom;
    std::int16_t _nombreChanson;

public:
    

};

