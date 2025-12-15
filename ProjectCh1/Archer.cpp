#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    cout << "궁수로 전직하였습니다." << endl;

    int ArcherHP = 30;
    int ArcherMP = 10;
    int ArcherPower =35;
    int ArcherDefence = 15;
    int ArcherAccuracy = 80;
    int ArcherSpeed = 50;

    setHP(ArcherHP);
    setMP(ArcherMP);
    setPower(ArcherPower);
    setDefence(ArcherDefence);
    setAccuracy(ArcherAccuracy);
    setSpeed(ArcherSpeed);
}
void Archer::attack() {
    cout << "궁수 " << nickname << " 이(가) 사격을 하였다." << endl;
}