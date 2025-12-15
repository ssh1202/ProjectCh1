#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "도적으로 전직하셨습니다." << endl;

    int ThiefHP = 50;
    int ThiefMP = 20;
    int ThiefPower = 35;
    int ThiefDefence = 5;
    int ThiefAccuracy = 40;
    int ThiefSpeed = 80;

    setHP(ThiefHP);
    setMP(ThiefMP);
    setPower(ThiefPower);
    setDefence(ThiefDefence);
    setAccuracy(ThiefAccuracy);
    setSpeed(ThiefSpeed);
}
void Thief::attack() {
    cout << "도적 " << nickname << " 이(가) 단검을 찔렀다." << endl;
}