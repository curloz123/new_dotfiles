#include <iostream>
#include <termios.h>
#include <unistd.h>

class player{ 
  public:
  int health,attack,defence;
  static int count;
  
  void customize(void){
     int player;
     std::cout<<"\n";
     std::cout<<"Select among following --> \n";
     std::cout<<"Knight(1), Mage(2), Goblin(3) : ";
     std::cin>>player;
     std::cout<<"Player "<<count<<" is ";
     if(player==1){
        std::cout<<"Knight\n";
        health=6;
        attack=10;
        defence=8;
      }
     else if(player==2){
        std::cout<<"Mage\n";
        health=8;
        attack=6;
        defence=10;
      }
     else if(player==3){
        std::cout<<"Goblin\n";
        health=10;
        attack=8;
        defence=6;
      }
     else{
       std::cout<<"U bad bro hit ctrl+c and restart the game :(\n";
     }
  } 
  void details(void){
    std::cout<<"Attack,Defence,Health of player"<<count<<" is "<<attack<<","<<defence<<","<<health<<"\n";
    count++;
  }

};

int player :: count=1;

void disableEcho() {
  struct termios tty;
  tcgetattr(STDIN_FILENO, &tty);
  tty.c_lflag &= ~ECHO;
  tcsetattr(STDIN_FILENO, TCSANOW, &tty);
                  
}

int main(){

  std::cout<<"Welcome to your first game\n";
  player player1,player2;
  player1.customize();
  player1.details();
  player2.customize();
  player2.details();
  std::cout<<"\n";
  std::cout<<"Lets start!!\n";
  std::cout<<"\n";
  disableEcho();
  
  int pseudo=1;
  while(pseudo!=0){
    int flag_a,flag_d;
    std::cout<<"First, player1's chance!!\n";
    std::cout<<"Player1 chose to --> Attack(1),Heal(2) :";
    std::cin>>flag_a;
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"Player2 chose to --> Heal(1),Defend(2) :";
    std::cin>>flag_d;
    std::cout<<"\n";
    std::cout<<"\n";

    if (flag_a==1 && flag_d==1){
      std::cout<<"Player2 loses HP!!\n";
      player2.health=player2.health-(player1.attack/2);
    }
    if (flag_a==1 && flag_d==2){
      std::cout<<"Player2's defence was succesful, will yield less damage!!\n";
      player2.health=player2.health-player1.attack/2+player2.defence-6;
    }
    if (flag_a==2 && flag_d==1){
      std::cout<<"Both players decide to heal!!\n";
      player1.health+=2;
      player2.health+=2;
    }
    if (flag_a==2 && flag_d==2){
      std::cout<<"Player1 decides to heal!!\n";
      player1.health+=2;
    }

    if(player2.health<=0){
      break;
    }

    std::cout<<"Player1's HP -->"<<player1.health<<"\n";
    std::cout<<"Player2's HP -->"<<player2.health<<"\n";

    std::cout<<"Now, player2's chance!!\n";
    std::cout<<"Player2 chose to --> Attack(1),Heal(2) :";
    std::cin>>flag_a;
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"Player1 chose to --> Heal(1),Defend(2) :";
    std::cin>>flag_d;
    std::cout<<"\n";
    std::cout<<"\n";
    if (flag_a==1 && flag_d==1){
      std::cout<<"Player1 loses HP!!\n";
      player1.health=player1.health-(player2.attack/2);
    }
    if (flag_a==1 && flag_d==2){
      std::cout<<"Player1's defence was succesful, will yield less damage!!\n";
      player1.health=player1.health-player2.attack/2+player1.defence-6;

    }
    if (flag_a==2 && flag_d==1){
      std::cout<<"Both players decide to heal!!\n";
      player1.health+=2;
      player2.health+=2;
    }
    if (flag_a==2 && flag_d==2){
      std::cout<<"Player2 decides to heal!!\n";
      player2.health+=2;
    }

    if(player1.health<=0){
      break;
    }

    std::cout<<"Player1's HP -->"<<player1.health<<"\n";
    std::cout<<"Player2's HP -->"<<player2.health<<"\n";
  }

  if(player2.health<=0){
    std::cout<<"Player1 won!!\n";
  }
  if(player1.health<=0){
    std::cout<<"Player2 won!!\n";
  }
  return 0;
}
