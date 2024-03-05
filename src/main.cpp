#include <iostream>
#include <ctime>

using namespace std;

int main () {

    srand(time(NULL));
    
    int TotalBullet, BulletPosition, Shoot, TotalPlayers;
    bool alive = true;
    
    do {
        
        cout << "Digite o número de jogadores: ";
        cin >> TotalPlayers;
        
        cout << "Digite o número de balas no canhão: ";
        cin >> TotalBullet;
        
        for(int i=1; i<=TotalPlayers; i++) {
            cout << "Hora do player " << i << " ..." << endl;
            cout << "Digite um número entre 1 e " << TotalBullet << " para atirar: ";
            cin >> Shoot;
            
            if(Shoot < 1 || Shoot > 6) {
                cout << "Opção inválida!" << endl;
                break;
            }
            
            BulletPosition = rand() % TotalBullet;
            
            if(Shoot == BulletPosition) {
                cout << "Player " << i << " morto!" << endl << endl;
                alive = false;
            } else {
                cout << "UFA! Por pouco!" << endl << endl;
            }
        }
        
    } while(alive);
    
    return 0;
}
