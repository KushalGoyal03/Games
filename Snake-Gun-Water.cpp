
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int PlayGame (char a , char b);

int main() {
    
    char you , comp;
    char Player1 , Player2;
    char ch = 'y';
    
    //Generate random numbers
    srand (time(0));
    int number = rand() % 100 + 1;
    
    if (number < 33)
        comp = 's';
    else if (number > 33 && number < 66)
        comp = 'w';
    else 
        comp = 'g';
    
    cout << "Welcome!\nIn the Snake , Water , Gun Game\n";
    
    do{
        cout << "\n******************************************************\n";
        cout << "\nChoose one of the option given below:    \n\n";
    
        cout << "\t1. Play with Computer.\n";
        cout << "\t2. Play with Friend.\n";
    
        int Option;
        cout << "\nEnter your selection: ";
        cin >> Option;
        cout << endl;
        
        switch(Option){
           
            case 1:
            {   
                cout << "Enter 's' for snake , 'w' for water and 'g' for gun: \n";
                cin >> you;
    
                int result = PlayGame (you , comp);
    
                cout << "\nYou chose " << you << " and computer chose " << comp << endl ;
    
                if (result == 0){
                    cout << "Game draw!\n";
                }
               else if (result == 1){
                    cout << "You win!\n";
                }
               else {
                    cout << "You lose!\n";
               } 
               break;
           }
           
          case 2:
          {
               cout << "Enter 's' for snake , 'w' for water and 'g' for gun: \n\n";
            
               cout << "Player1's turn :  ";
               cin >> Player1;
               cout << "Player2's turn :  ";
               cin >> Player2;
    
               int result1= PlayGame (Player1 , Player2);
    
               cout << "\nPlayer1 chose " << Player1 << " and Player2 chose " << Player2 << endl;
    
               if (result1 == 0){
                  cout << "Game draw!\n";
               }
              else if (result1 == 1){
                  cout << "Player1 :- win  |  Player2 :- lose\n";
               }
               else {
                  cout << "Player1 :- lose  |  Player2 :- win\n";
               }
               break;
           }
           default:
           {
               cout << "No such option available!";
               break;
           }           
       }
       
       cout << "\n******************************************************\n\nPress y or n key to play again or to exit the Game...";
       cin >> ch;
       
       if (ch=='n' || ch=='N')
            cout<<"\n******************************************************\n\n--------  Exitted Successfully from the Game  --------\n";
  
            
    }while (ch == 'y' || ch == 'Y');
    
    return 0;
    
}

int PlayGame (char a , char b){
    // returns 1 if you win , -1 if you lose and 0 if draw
    
    //condition for draw
    //cases covered:  ss , gg , ww
    
    if (a == b)
        return 0;
     
     //conditions for non - draw
     //cases covered: sw , sg , gs , gw , ws , wg 
     
     if (a == 's' && b == 'w')
         return 1;
      else if (a == 'w' && b == 's')
          return -1;
      
      if (a == 's' && b == 'g')
         return -1;
      else if (a == 'g' && b == 's')
          return 1;
      
      if (a == 'w' && b == 'g')
         return 1;
      else if (a == 'g' && b == 'w')
          return -1;
}
