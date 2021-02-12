// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        char c;
        cin >> c;
        map <char, string> ID_Ship;
        ID_Ship.insert(pair<char, string>('b', "BattleShip" ));
        ID_Ship.insert(pair<char, string>('B', "BattleShip" ));
        ID_Ship.insert(pair<char, string>('c', "Cruiser" ));
        ID_Ship.insert(pair<char, string>('C', "Cruiser" ));
        ID_Ship.insert(pair<char, string>('d', "Destroyer" ));
        ID_Ship.insert(pair<char, string>('D', "Destroyer" ));
        ID_Ship.insert(pair<char, string>('f', "Frigate" ));
        ID_Ship.insert(pair<char, string>('F', "Frigate" ));

        cout << ID_Ship[c] << '\n';
    }
    return 0;
}
