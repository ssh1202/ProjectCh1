#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "마법사로 전직하였습니다." << endl;

    int MagicianHP = 20;
    int MagicianMP = 80;
    int MagicianPower = 30;
    int MagicianDefence = 3;
    int MagicianAccuracy = 30;
    int MagicianSpeed = 5;

    setHP(MagicianHP);
    setMP(MagicianMP);
    setPower(MagicianPower);
    setDefence(MagicianDefence);
    setAccuracy(MagicianAccuracy);
    setSpeed(MagicianSpeed);
}
void Magician::attack() {
    cout << "마법사 " << nickname << " 이(가) 마법을 사용했다." << endl;
}