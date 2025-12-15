#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    cout << "전사로 전직하셨습니다." << endl;

    int warriorHP = 80;
    int warriorMP = 30;
    int warriorPower = 20;
    int warriorDefence = 15;
    int warriorAccuracy = 30;
    int warriorSpeed = 30;

    setHP(warriorHP);
    setMP(warriorMP);
    setPower(warriorPower);
    setDefence(warriorDefence);
    setAccuracy(warriorAccuracy);
    setSpeed(warriorSpeed);
}
void Warrior::attack() {
	cout << "전사 " << nickname << " 이(가) 검을 휘둘렀다." << endl;
}